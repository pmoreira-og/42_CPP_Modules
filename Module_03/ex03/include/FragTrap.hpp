/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:45:10 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/17 10:51:39 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const & og);
		FragTrap & operator=(FragTrap const & other);
		~FragTrap();
		void highFivesGuys(void);
		
		static const unsigned int attack_power = 30;
		static const unsigned int total_energy = 100;
		static const unsigned int total_hp = 100;
};
