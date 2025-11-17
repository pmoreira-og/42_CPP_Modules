/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:50:22 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/17 12:53:25 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_attack = ScavTrap::attack_power;
	this->_energyPoints = ScavTrap::total_energy;
	this->_hitPoints = ScavTrap::total_hp;
	std::cout << YEL"ScavTrap default constructor called"DEF << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_attack = 20;
	this->_energyPoints = 50;
	this->_hitPoints = 100;
	std::cout << YEL"ScavTrap assignment constructor called"DEF << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & og)
{
	*this = og;
	std::cout << YEL"ScavTrap copy constructor called"DEF << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & other)
{
	std::cout << YEL"ScavTrap copy assignment operator called"DEF << std::endl;
	if (this != &other)
	{
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_attack = other._attack;
		this->_energyPoints = other._energyPoints;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << YEL"ScavTrap destructor called"DEF << std::endl;
}

void	ScavTrap::attack(const std::string & target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << YEL"ScavTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no HP left."DEF << std::endl;
		return;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << YEL"ScavTrap " << this->_name << ":";
		std::cout << " Unable to do the action, no energy points left."DEF << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << YEL"ScavTrap " << this->_name << ":";
	std::cout << " attacks " << target;
	std::cout << ", causing " << this->_attack << " points of damage!"DEF << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << YEL"ScavTrap " << this->_name << ":";
	std::cout << " is in Gate keeper mode."DEF << std::endl;
}