#include <iostream>
#include <cstdlib>
#include <ctime>

class Base {
public:
	virtual ~Base(void) {};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base
	*generate(void)
{
	int	random_number;

	std::srand(std::time(0));
	random_number = std::rand() % 3;
	if (random_number == 0)
		return (new A());
	else if (random_number == 1)
		return (new B());
	else
		return (new C());
}

void
	identify(Base *p)
{
	A	*pa;
	B	*pb;
	C	*pc;

	pa = dynamic_cast<A *>(p);
	pb = dynamic_cast<B *>(p);
	pc = dynamic_cast<C *>(p);
	if (pa)
		std::cout << "A" << std::endl;
	else if (pb)
		std::cout << "B" << std::endl;
	else if (pc)
		std::cout << "C" << std::endl;
}

void
	identify(Base &p)
{
	try
	{
		A	&ra = dynamic_cast<A &>(p);
		(void)ra;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		B	&rb = dynamic_cast<B &>(p);
		(void)rb;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast &bc) {}
	try
	{
		C	&rc = dynamic_cast<C &>(p);
		(void)rc;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast &bc) {}
}

int
	main(void)
{
	Base	*base1 = generate();

	identify(base1);

	Base	&base2 = *generate();

	identify(base2);

	delete base1;
	delete &base2;
	return (0);
}
