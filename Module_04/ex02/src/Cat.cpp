/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:10 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:50:36 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, "some idea");
	}
}

Cat::Cat(std::string name) : AAnimal(name)
{
	std::cout << "Cat assignment constructor called" << std::endl;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, "some idea");
	}
}

//! Deep copy vs. Shallow copy

Cat::Cat(Cat const & og)
{
	*this = og;
	this->_mind = new Brain();
	if (this->_mind)
	{
		for (int i = 0; i < 100; i++)
			this->_mind->setIdea(i, og.getBrain()->getIdea(i));
	}
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_mind = other._mind;
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	if (this->_mind)
		delete(this->_mind);
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Loud meow noises" << std::endl;
}

Brain	*Cat::getBrain() const
{
	return (this->_mind);
}