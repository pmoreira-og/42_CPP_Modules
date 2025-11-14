/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:50:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 15:09:23 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScavTrap.hpp"
#include "../include/FragTrap.hpp"

int main(void)
{
	ClapTrap human("Bob");
	ScavTrap human2("Diogo");
	FragTrap other;

	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 11; i++)
		human.beRepaired(1);	
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 51; i++)
		human2.beRepaired(1);
	human2.attack("Bob");
	std::cout << "----------------------------------------------" << std::endl;
	human2.guardGate();
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 101; i++)
		other.beRepaired(1);
	std::cout << "----------------------------------------------" << std::endl;
	other.attack("Diogo");
	std::cout << "----------------------------------------------" << std::endl;
	other.highFivesGuys();
	std::cout << "----------------------------------------------" << std::endl;
	return 0;
}
