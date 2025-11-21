/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:50:48 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, "some idea");
	}
}

Dog::Dog(std::string name) : AAnimal(name)
{
	std::cout << "Dog assignment constructor called" << std::endl;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, "some idea");
	}
}

Dog::Dog(Dog const & og)
{
	*this = og;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, og.getBrain()->getIdea(i));
	}
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_mind = other._mind;
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog()
{
	if (this->_mind)
		delete(this->_mind);
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Loud bark noises" << std::endl;
}

Brain	*Dog::getBrain() const
{
	return (this->_mind);
}
