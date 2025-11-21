/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:36:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 14:27:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

Character::Character() : _name("Nameless")
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string & name)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	std::cout << "Character assignment constructor called" << std::endl;
}

Character::Character(Character const & og)
{
	*this = og;
	
	std::cout << "Character copy constructor called" << std::endl;
}

Character & Character::operator=(Character const & other)
{
	std::cout << "Character copy assigment operator called" << std::endl;
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName()
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter& target)
{
	
}

void Character::cleanInv()
{
	for (size_t i = 0; i < 4; i++)
	{
		if (this->_inv[i])
		{
			delete (this->_inv[i]);
			this->_inv[i] = NULL;
		}
	}
}

/* void Character::copyInv(Character const & og)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (og._inv[i])
		{
			this->_inv[i] = new 
		}
	}
	
} */
