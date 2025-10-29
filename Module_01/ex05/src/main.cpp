/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 11:33:26 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/29 10:29:33 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Harl.hpp"

int main(void)
{
	Harl	h;
	int		i;
	std::string array[5] = {"DEBUG", "INFO", "WARNING", "ERROR", "TEST"};

	i = -1;
	std::cout << std::endl << "--------------------------------" << std::endl;
	while (++i < 5)
		h.complain(array[i]);
	std::cout << std::endl << "--------------------------------" << std::endl;
	return 0;
}
