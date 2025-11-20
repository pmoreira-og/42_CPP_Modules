/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:46:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 12:54:04 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
	std::cout << "WrongCat assignment constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & og)
{
	*this = og;
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & other)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "This meow never gonna work" << std::endl;
}