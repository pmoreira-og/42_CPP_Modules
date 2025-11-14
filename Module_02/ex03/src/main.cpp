/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:47:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/14 10:28:20 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(6, 0);
	Point	c(3, 3);
	Point	point(3, 1);
	Point	point2 = c;
	Point	point3(3, 0);

	bool result = bsp(a, b, c, point);
	std::cout << "------------------------------------------------------" << std::endl;
	if (result)
		std::cout << "Result: It's inside" << std::endl;
	else
		std::cout << "Result: It's not inside" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	result = bsp(a, b, c, point2);
	std::cout << "------------------------------------------------------" << std::endl;
	if (result)
		std::cout << "Result 2: It's inside" << std::endl;
	else
		std::cout << "Result 2: It's not inside" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	result = bsp(a, b, c, point3);
	std::cout << "------------------------------------------------------" << std::endl;
	if (result)
		std::cout << "Result 3: It's inside" << std::endl;
	else
		std::cout << "Result 3: It's not inside" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	return 0;
}
