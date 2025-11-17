/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 15:35:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/17 14:39:09 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Nameless_clap_name"), _name("Nameless")
{
	this->_energyPoints = ScavTrap::total_energy;
	this->_attack = FragTrap::attack_power;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << CYN"DiamondTrap default constructor called"DEF << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") , _name(name)
{
	this->_energyPoints = ScavTrap::total_energy;
	this->_attack = FragTrap::attack_power;
	this->_hitPoints = FragTrap::_hitPoints;
	std::cout << CYN"DiamondTrap assignment constructor called"DEF << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & og)
{
	*this = og;
	std::cout << CYN"DiamondTrap copy constructor called"DEF << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & other)
{
	std::cout << CYN"DiamondTrap copy assignment operator called"DEF << std::endl;
	if (this != &other)
	{
		ClapTrap::operator=(other);
		this->_attack = other._attack;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_name = other._name;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << CYN"DiamondTrap destructor called to ";
	std::cout << this->_name << "."DEF << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << CYN"My private name is " << this->_name << "."DEF << std::endl;
	std::cout << CYN"My ClapTrap name is " <<this->getName() << "."DEF << std::endl;
}