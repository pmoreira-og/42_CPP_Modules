/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:10 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 12:27:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string name) : Animal(name)
{
	std::cout << "Cat assignment constructor called" << std::endl;
}

Cat::Cat(Cat const & og)
{
	*this = og;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Loud meow noises" << std::endl;
}