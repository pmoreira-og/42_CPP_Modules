/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:23:04 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 14:43:51 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_type;

	public:
		HumanA(std::string name, Weapon & type);
		~HumanA();
		void attack(void);
};