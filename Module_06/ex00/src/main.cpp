/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:51:23 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/16 13:55:01 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
		return (std::cout << "Usage: ./converter [input]" << std::endl, 2);
	ScalarConverter::converter(av[1]);
	return (0);
}
