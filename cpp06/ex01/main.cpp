#include <cstdint>
#include <iostream>
#include <string>

class Data {

public:

	Data(int n, std::string str) : _n(n), _str(str) {};
	int			_n;
	std::string	_str;

};

uintptr_t
	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data
	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int
	main(void)
{
	Data		*data = new Data(42, "bonjour");
	uintptr_t	raw;
	Data		*ptr;

	std::cout << data << "\t" << data->_n << "\t" << data->_str << std::endl;
	raw = serialize(data);
	ptr = deserialize(raw);
	std::cout << ptr << "\t" << ptr->_n << "\t" << ptr->_str << std::endl;
	return (0);
}
