/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:43:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/12 16:29:26 by pmoreira         ###   ########.fr       */
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

Point::Point(Point const &og)
{
	std::cout << "Point copy constructor called" << std::endl;
	*this = og;
}

Point::~Point()
{
	std::cout << "Point destructor called" << std::endl;
}

Point & Point::operator=(Point const & og)
{
	std::cout << "Point copy assignment operator called" << std::endl;
	if (this != &og)
	{
		this->_x = og._x;
		this->_y = og._y;
	}
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

bool Point::operator==(Point const & other) const
{
	if (this->getX() == other.getX() && this->getY() == other.getY())
		return (true);
	return (false);
}
