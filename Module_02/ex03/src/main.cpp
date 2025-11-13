/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 15:47:45 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/13 16:06:23 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main( void )
{
	Point	a(0, 0);
	Point	b(6 , 0);
	Point	c(3, 3);
	Point	point(3, 0.125f);
	/* Point	point = c; */

	bool result = bsp(a, b, c, point);
	std::cout << "------------------------------------------------------" << std::endl;
	if (result)
		std::cout << "It's inside" << std::endl;
	else
		std::cout << "It's not inside" << std::endl;
	std::cout << "------------------------------------------------------" << std::endl;
	return 0;
}
