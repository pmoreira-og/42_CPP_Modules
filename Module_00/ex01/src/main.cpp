/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:44:03 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/20 12:06:42 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main(void)
{
	std::string	input;
	PhoneBook	book;
	int			index;
	int			counter;

	std::cout << "--------------------------------------------" << std::endl;
	std::cout << "Welcome to your PhoneBook!" << std::endl;
	std::cout << "Available Commands: ADD, SEARCH and EXIT." << std::endl;
	index = -1;
	counter = -1;
	while (std::cin)
	{
		input.clear();
		std::cout << "Input: " << input;
		getline(std::cin, input);
		if (input.empty())
			continue;
		if (input == "SEARCH")
			book.getTable(counter);
		else if (input == "ADD")
		{
			if (index >= 7)
				index = -1;
			book.setContact(++index);
			if (counter < 7)
				counter++;
		}
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command. The program only accepts ADD, SEARCH and EXIT." << std::endl;
	}
	std::cout << std::endl << "Exiting the program." << std::endl;
	return (0);
}
