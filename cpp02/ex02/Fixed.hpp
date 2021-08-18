#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed {

public:

	Fixed(void);
	Fixed(int const n);
	Fixed(float const n);
	Fixed(Fixed const &src);
	~Fixed(void);
	Fixed				&operator=(Fixed const &rhs);
	bool				operator>(Fixed const &rhs) const;
	bool				operator<(Fixed const &rhs) const;
	bool				operator>=(Fixed const &rhs) const;
	bool				operator<=(Fixed const &rhs) const;
	bool				operator==(Fixed const &rhs) const;
	bool				operator!=(Fixed const &rhs) const;
	Fixed				operator+(Fixed const &rhs) const;
	Fixed				operator-(Fixed const &rhs) const;
	Fixed				operator*(Fixed const &rhs) const;
	Fixed				operator/(Fixed const &rhs) const;
	Fixed				&operator++();
	Fixed				operator++(int);
	Fixed				&operator--();
	Fixed				operator--(int);
	static Fixed		&min(Fixed &a, Fixed &b);
	static const Fixed	&min(Fixed const &a, Fixed const &b);
	static Fixed		&max(Fixed &a, Fixed &b);
	static const Fixed	&max(Fixed const &a, Fixed const &b);
	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

private:

	int					_val;
	static const int	_nFrac = 8;

};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif
