/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:50:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 14:34:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"

int main(void)
{
	ClapTrap human("Bob");
	ScavTrap human2("Diogo");
	ScavTrap other;

	std::cout << "----------------------------------------------" << std::endl;
	other.guardGate();
	other.attack("Bob");
	for (size_t i = 0; i < 11; i++)
		other.beRepaired(1);
	human.attack("Diogo");
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 20; i++)
		human2.takeDamage(1);
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 20; i++)
		human.takeDamage(1);
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 20; i++)
		human2.takeDamage(10);
	std::cout << "----------------------------------------------" << std::endl;
	return 0;
}
