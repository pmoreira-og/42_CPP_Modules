/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:00:33 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 15:08:05 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/whatever.hpp"

int main()
{
	int	a = 8;
	int b = 0;
	std::cout << "The value inside a is:" << a << std::endl;
	std::cout << "The value inside b is:" << b << std::endl;
	std::cout << "----------------------------------------------------"<< std::endl;
	std::cout << "The min value between a and b is:" << min(a, b) << std::endl;
	std::cout << "The max value between a and b is:" << max(a, b) << std::endl;
	std::cout << "Now a and b got the values swapped." << std::endl;
	swap(a, b);
	std::cout << "----------------------------------------------------"<< std::endl;
	std::cout << "The value inside a is:" << a << std::endl;
	std::cout << "The value inside b is:" << b << std::endl;
	return 0;
}
