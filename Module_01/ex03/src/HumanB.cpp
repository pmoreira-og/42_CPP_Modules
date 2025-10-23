/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:38:26 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 16:05:38 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _type(NULL)
{
	std::cout << "HumanB assignment constructor called" << std::endl;
}

HumanB::HumanB(std::string name, Weapon & type) : _name(name), _type(NULL)
{
	this->setWeapon(type);
	std::cout << "HumanB second assignment constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack(void)
{
	if (this->_type)
		std::cout << this->_name << " attacks with their " << this->_type->getType() << std::endl;
	else
		std::cout << this->_name << " have no weapon to use" << std::endl;
}

void HumanB::setWeapon(Weapon & type)
{
	this->_type = &type;
}
