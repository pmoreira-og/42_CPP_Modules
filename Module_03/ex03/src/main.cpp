/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:50:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/17 14:37:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"
#include "../include/DiamondTrap.hpp"

int main(void)
{
	FragTrap	frag("Bob");
	ScavTrap	scav("Diogo");
	DiamondTrap	diam("Robson");
	DiamondTrap copy = diam;

	std::cout << "----------------------------------------------" << std::endl;
	diam.attack("Bob");
	scav.attack("Bob");
	frag.attack("Diogo");
	std::cout << "----------------------------------------------" << std::endl;
	diam.guardGate();
	scav.guardGate();
	std::cout << "----------------------------------------------" << std::endl;
	diam.whoAmI();
	diam.highFivesGuys();
	std::cout << "----------------------------------------------" << std::endl;
	copy.whoAmI();
	copy.attack("Rafael");
	std::cout << "----------------------------------------------" << std::endl;
	return 0;
}
