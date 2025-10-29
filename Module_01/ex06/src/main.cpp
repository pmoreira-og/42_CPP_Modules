/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:22:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/29 11:52:44 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return (0);
	}
	Harl h;
	std::string input;

	std::cout << std::endl << "--------------------------------------" << std::endl;
	input = av[1];
	h.complain(input);
	std::cout << std::endl << "--------------------------------------" << std::endl;
	return (0);
}
