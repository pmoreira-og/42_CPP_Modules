/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:11:14 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/22 12:08:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
	Zombie *heap_zombie;

	Zombie stack_zombie = Zombie("Ronaldo");
	heap_zombie = newZombie("Robson");
	std::cout << std::endl << "-------------------------------------" << std::endl;
	std::cout << "Stack screams!" << std:: endl;
	stack_zombie.announce();
	std::cout << "Heap answers!" << std:: endl;
	heap_zombie->announce();
	randomChump("ghosted zombie");
	std::cout << std::endl << "-------------------------------------" << std::endl;
	delete(heap_zombie);
	return (0);
}
