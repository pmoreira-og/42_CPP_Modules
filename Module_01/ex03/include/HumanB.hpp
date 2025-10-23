/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:38:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 15:32:31 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;
		Weapon		*_type;

	public:
		HumanB(std::string name);
		HumanB(std::string name, Weapon & type);
		~HumanB();
		void attack(void);
		void setWeapon(Weapon & type);
};