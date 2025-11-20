/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 12:32:09 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

Animal::Animal() : _type("Not_a_Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string name) : _type(name)
{
	std::cout << "Animal assignment constructor called" << std::endl;
}

Animal::Animal(Animal const & og)
{
	*this = og;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Random Animal noises" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->_type);
}
