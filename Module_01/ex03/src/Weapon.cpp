/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:38:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 15:19:25 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon assignment constructor called" << std::endl;
}

std::string & Weapon::getType(void)
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}