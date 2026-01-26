/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:28:06 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/26 14:34:04 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Data.hpp"


Data::Data() : _value(0)
{
}

Data::Data(int const & value) : _value(value)
{
	
}
Data::Data(Data const & og)
{
	*this = og;
}
Data & Data::operator=(Data const & other)
{
	if (this != &other)
		this->_value = other.getValue();
	return (*this);
}

Data::~Data()
{
}

int Data::getValue() const
{
	return (this->_value);
}
