/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:56:49 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 12:46:02 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
	{
		std::cout << USAGE << std::endl;
		return (2);
	}
	long value = strtol(av[1], NULL, 10);
	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	{
		std::cout << "Invalid integer value" << std::endl;
		return (1);
	}
	Data	data;
	data.value = static_cast<int> (value);

	uintptr_t raw = Serializer::serialize(&data);

	std::cout << "&data: " << &data << std::endl;
	std::cout << "raw :" << raw << std::endl;
	std::cout << "deserialize of raw: " << Serializer::deserialize(raw) << std::endl;
	return (0);
}
