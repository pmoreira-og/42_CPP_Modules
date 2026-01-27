/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:34:06 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 16:30:56 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/iter.hpp"

int main()
{
	int int_array[5] = {1,2,3,4,5};
	::iter(int_array, 5, &::print);
	std::cout << std::endl;
	std::cout << "----------------------------------------------------"<< std::endl;
	std::cout << "running invert" << std::endl;
	::iter(int_array, 5, &::invert);
	std::cout << "----------------------------------------------------"<< std::endl;
	::iter(int_array, 5, &::print);
	std::cout << std::endl;
	
	std::cout << "----------------------------------------------------"<< std::endl;
	const double const_double_array[5] = {6,7,8,9,10};
	::iter(const_double_array, 5, &::print);
	std::cout << std::endl;
	std::cout << "----------------------------------------------------"<< std::endl;
	// std::cout << "running invert" << std::endl;
	// ::iter(const_double_array, 5, &::invert);
	std::cout << "----------------------------------------------------"<< std::endl;
	::iter(const_double_array, 5, &::print);
	std::cout << std::endl;
	return 0;
}
