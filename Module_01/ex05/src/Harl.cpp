/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:33:21 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/28 18:00:32 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

Harl::Harl()
{
	std::cout << "A wild Harl has appeared" << std::endl;
}

Harl::~Harl()
{
	std::cout << "Harl is gone now" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "Run valgrind on that it probably have leaks" << std::endl;
}

void Harl::info( void )
{
	std::cout << "C is a strongly typed language" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "You gonna have problems putting that on Norm later..." << std::endl;
}

void Harl::error( void )
{
	std::cout << "SEEEEEG FAAAAAAAAAAAUUUUUULLLTT" << std::endl;
}

void Harl::complain( std::string level )
{
	std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*methods[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (level == list[i])
			return ((this->*methods[i])());
	std::cout << "Probably complaining about insignificant problems" << std::endl;
}
