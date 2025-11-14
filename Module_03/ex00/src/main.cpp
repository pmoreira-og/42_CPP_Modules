/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:50:08 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 12:43:37 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ClapTrap.hpp"

int main(void)
{
	ClapTrap human("Bob");
	ClapTrap human2("Diogo");
	ClapTrap other;

	std::cout << "----------------------------------------------" << std::endl;
	human.attack("Diogo");
	human2.takeDamage(0);
	human2.beRepaired(10000);
	human.attack("Diogo");
	human2.takeDamage(9);
	human2.beRepaired(10000);
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 11; i++)
		other.takeDamage(1);
	std::cout << "----------------------------------------------" << std::endl;
	for (size_t i = 0; i < 11; i++)
		human2.beRepaired(1);
	std::cout << "----------------------------------------------" << std::endl;
	other.attack("void");
	other.takeDamage(100);
	std::cout << "----------------------------------------------" << std::endl;
	human2.attack("Bob");
	human.attack("Diogo");
	human2.takeDamage(10);
	human2.beRepaired(10000);
	std::cout << "----------------------------------------------" << std::endl;
	other = human;
	other.beRepaired(10);
	std::cout << "----------------------------------------------" << std::endl;
	return 0;
}
