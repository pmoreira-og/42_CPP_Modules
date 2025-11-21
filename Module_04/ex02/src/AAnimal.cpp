/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:48:40 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AAnimal.hpp"

AAnimal::AAnimal() : _type("Abstract_Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string name) : _type(name)
{
	std::cout << "AAnimal assignment constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & og)
{
	*this = og;
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & other)
{
	std::cout << "AAnimal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

void	AAnimal::makeSound() const
{
	std::cout << "Random AAnimal noises" << std::endl;
}

std::string	AAnimal::getType() const
{
	return (this->_type);
}
