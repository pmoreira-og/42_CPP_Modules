/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:34:19 by pmoreira          #+#    #+#             */
/*   Updated: 2026/02/18 13:26:09 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/easyfind.hpp"
#include <vector>
#include <iomanip>

#define SIZE 10

int main()
{
	std::vector<double> container;

	std::cout << std::fixed << std::setprecision(1) << std::endl;

	for (int i = 0; i < SIZE; i++)
	{
		container.push_back(static_cast<double>(i));
	}
	containerPrinter(container);
	std::cout << "----------------------------------------------------"<< std::endl;
	for (int i = 0; i < SIZE + 1; i++)
	{
		try
		{
			std::cout << "Got index [" << i << "]: " << easyfind(container, i) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << "Exception:" << e.what() << std::endl;
		}
	}
	std::cout << "----------------------------------------------------"<< std::endl;
	return (0);
}
