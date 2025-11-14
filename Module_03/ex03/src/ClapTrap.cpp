/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:50:13 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 12:36:48 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

ClapTrap::ClapTrap() : _hitPoints(10), _energyPoints(10), _attack(0)
{
	this->_name = "Nameless";
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attack(0)
{
	std::cout << "ClapTrap assignment constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & og)
{
	*this = og;
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & other)
{
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_energyPoints = other._energyPoints;
		this->_hitPoints = other._hitPoints;
		this->_attack = other._attack;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no HP left." << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no energy points left." << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << ":";
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attack << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << ":";
		std::cout << " No HP left. RIP" << std::endl;
		return;
	}
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	else
		this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << ":";
	std::cout << " took " << amount << " of damage!";
	std::cout << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no HP left." << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no energy points left." << std::endl;
		return;
	}
	if (amount + this->_hitPoints >= 10)
		this->_hitPoints = 10;
	else
		this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << "ClapTrap " << this->_name << ":";
	std::cout << " got repaired by " << amount << " of HP";
	std::cout << std::endl;
}
