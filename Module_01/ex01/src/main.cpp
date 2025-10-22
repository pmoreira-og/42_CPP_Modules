/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:11:27 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/22 13:03:44 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

int main(void)
{
	Zombie	*test_array;
	int		i;
	int		size;
	
	std::cout << std::endl << "-------------------------------------" << std::endl;
	size = 10;
	test_array = zombieHorde(size, "Bob");
	if (!test_array)
		return (1);
	i = -1;
	std::cout << std::endl << "-------------------------------------" << std::endl;
	while(++i < size)
		test_array[i].announce();
	std::cout << std::endl << "-------------------------------------" << std::endl;
	delete [] test_array;
	return (0);
}