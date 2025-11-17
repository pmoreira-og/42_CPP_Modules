/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 12:50:33 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/17 12:48:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & og);
		ScavTrap & operator=(ScavTrap const & other);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();

		static const unsigned int attack_power = 20;
		static const unsigned int total_energy = 50;
		static const unsigned int total_hp = 100;
};
