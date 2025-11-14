/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:48:25 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 10:29:30 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::_frac = 8;

Fixed::Fixed() : _value(0)
{
	// std::cout << "Fixed default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & og)
{
	// std::cout << "Fixed copy constructor called" << std::endl;
	*this = og;
}

Fixed::Fixed(const int num)
{
	// std::cout << "Fixed int constructor called" << std::endl;
	this->_value = num << this->_frac;
}

Fixed::Fixed(const float fnum)
{
	// std::cout << "Fixed float constructor called" << std::endl;
	this->_value = roundf(fnum * (1 << this->_frac));
}

Fixed::~Fixed()
{
	// std::cout << "Fixed destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & og)
{
	// std::cout << "Fixed copy assignment operator called" << std::endl;
	if (this != &og)
		this->_value = og._value;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed &other)
{
	Fixed	result;

	result.setRawBits(this->getRawBits() + other.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &other)
{
	Fixed	result;

	result.setRawBits(this->getRawBits() - other.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &other)
{
	Fixed	res;
	res.setRawBits((this->getRawBits() * other.getRawBits()) >> this->_frac);
	return (res);
}

Fixed	Fixed::operator/(const Fixed &other)
{
	if (other.getRawBits() == 0)
	{
		std::cerr << "Division by zero isn't permitted, returned 0" << std::endl;
		return (Fixed());
	}
	Fixed	res;
	res.setRawBits((this->getRawBits() << this->_frac) / other.getRawBits());
	return (res);
}

Fixed	&Fixed::operator++(void)
{
	++this->_value;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed temp = *this;

	this->_value++;
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	--this->_value;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed temp = *this;

	this->_value--;
	return (temp);
}

bool Fixed::operator>(Fixed const & other) const
{
	if (this->getRawBits() > other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const & other) const
{
	if (this->getRawBits() < other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const & other) const
{
	if (this->getRawBits() >= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const & other) const
{
	if (this->getRawBits() <= other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const & other) const
{
	if (this->getRawBits() == other.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const & other) const
{
	if (this->getRawBits() != other.getRawBits())
		return (true);
	return (false);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float Fixed::toFloat() const
{
	return (this->_value / (float)(1 << this->_frac));
}

int Fixed::toInt() const
{
	return (this->_value >> this->_frac);
}

std::ostream& operator<<(std::ostream& os, const Fixed& f)
{
	os << f.toFloat();
	return (os);
}

Fixed	Fixed::abs(void)
{
	if (*this < 0)
		return (Fixed(this->toFloat() * -1));
	return (*this);
}
