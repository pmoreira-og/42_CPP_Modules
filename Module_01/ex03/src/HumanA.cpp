/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:37:55 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 16:05:30 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & type) : _name(name), _type(type)
{
	std::cout << "HumanA assignment constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}

void HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}