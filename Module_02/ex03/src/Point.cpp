/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:43:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/12 16:05:53 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Point default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	std::cout << "Point assignment constructor called" << std::endl;
}

Point::Point(Fixed const &og)
{
	std::cout << "Point copy constructor called" << std::endl;
	*this = og;
}

Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
}

Fixed & Fixed::operator=(Fixed const & og)
{
	std::cout << "Point copy assignment operator called" << std::endl;
	if (*this != og)
		*this = og;
	return (*this);
}

Fixed Point::getX() const
{
	return (this->_x);
}
Fixed Point::getY() const
{
	return (this->_y);
}