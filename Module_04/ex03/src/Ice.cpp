/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:17:30 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 12:19:58 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(std::string const & type) : AMateria(type)
{
	std::cout << "Ice assignment constructor called" << std::endl;
}

Ice::Ice(Ice const & og)
{
	*this = og;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & other)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called" << std::endl;
}

AMateria	*Ice::clone() const
{
	return (new Ice(*this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << UYEL"Ice: ";
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *"DEF << std::endl;
}