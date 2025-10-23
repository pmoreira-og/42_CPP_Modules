/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:32:25 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 16:57:56 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sed.hpp"

int main(int ac, char const *av[])
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cout << "Couldn't open the infile" << std::endl;
		return (1);
	}
	std::string temp;
	temp.
	std::cout << "you shall pass" << std::endl;
	return (0);
}
