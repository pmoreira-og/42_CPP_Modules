/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 12:27:32 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string name) : Animal(name)
{
	std::cout << "Dog assignment constructor called" << std::endl;
}

Dog::Dog(Dog const & og)
{
	*this = og;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Loud bark noises" << std::endl;
}