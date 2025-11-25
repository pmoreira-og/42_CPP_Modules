/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:36:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 13:07:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"

AMateria * Character::_floor = NULL;

Character::Character() : _name("Nameless")
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const & name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inv[i] = NULL;
	std::cout << "Character assignment constructor called" << std::endl;
}

Character::Character(Character const & og)
{
	std::cout << "Character copy constructor called" << std::endl;
	*this = og;
}

Character & Character::operator=(Character const & other)
{
	std::cout << "Character copy assigment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->cleanInv();
		this->copyInv(other);
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character destructor called" << std::endl;
	this->cleanInv();
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (size_t i = 0; i < 4; i++)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			std::cout  << GRN""<< this->getName() << " has equipped " << m->getType() << "!"DEF << std::endl;
			return ;
		}
	}
	std::cout << URED"" << this->getName() << " couldn't equip " << m->getType() << "!"DEF << std::endl;
}

void Character::unequip(int idx)
{
	if (!(idx >= 0 && idx <= 3))
	{
		std::cout << URED"Invalid index, only 4 slots available (0~3)!"DEF << std::endl;
		return ;
	}
	std::cout << UCYN"Materia: ";
	std::cout << this->_inv[idx]->getType() <<" successfully unequipped!"DEF << std::endl;
	_floor = this->_inv[idx];
	this->_inv[idx] = NULL;
	_cleanFloor();
}

void Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx <= 3))
	{
		std::cout << URED"Invalid index, only 4 slots available (0~3)!"DEF << std::endl;
		return ;
	}
	if ((idx >= 0 && idx <= 3) && this->_inv[idx])
	{
		this->_inv[idx]->use(target);
		delete (this->_inv[idx]);
		this->_inv[idx] = NULL;
	}
	else
		std::cout << UBLU"" << this->getName() << "'s inventory slot " << idx << " is empty"DEF << std::endl;
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

void Character::_cleanFloor(void)
{
	if (_floor)
	{
		delete (_floor);
		_floor = NULL;
	}
}

void Character::copyInv(Character const & og)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (og._inv[i])
		{
			this->_inv[i] = og._inv[i]->clone();
		}
		else
			this->_inv[i] = NULL;
	}
}
