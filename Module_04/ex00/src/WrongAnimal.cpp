/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:47:17 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 12:48:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Just_a_WrongAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string name) : _type(name)
{
	std::cout << "WrongAnimal assignment constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & og)
{
	*this = og;
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & other)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Random WrongAnimal noises" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}