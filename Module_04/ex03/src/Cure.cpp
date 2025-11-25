/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:26:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 12:19:53 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(std::string const & type) : AMateria(type)
{
	std::cout << "Cure assignment constructor called" << std::endl;
}

Cure::Cure(Cure const & og)
{
	*this = og;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & other)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_type = other._type;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called"<< std::endl;
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter& target)
{
	std::cout << UYEL"Cure: ";
	std::cout << "* shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *"DEF << std::endl;
}