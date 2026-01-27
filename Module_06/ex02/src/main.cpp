/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:01:35 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 13:36:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Base.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << ">>┈┈┈> Randomizer";
	std::cout << std::endl << std::endl;

	Base *thing = generate();
	Base &reskin = *thing;
	identify(thing);
	identify(reskin);

	delete thing;
	return (0);
}
