/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 12:58:51 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/20 12:08:55 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	std::cout << "PhoneBook default constructor called." << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "PhoneBook default destructor called." << std::endl;
}

std::string fill_value(std::string query)
{
	std::string input;

	std::cout << query;
	std::getline(std::cin, input);
	return (input);
}

void print_error_msg(int index)
{
	if (index == 1)
		std::cout << "Only Alphabetic chars with no spaces are allowed." << std::endl;
	else if (index == 2)
		std::cout << "Only Numeric chars and '+' are allowed. Ex: +351147852369 or 147258369." \
<< std::endl;
	else if (index == 3)
		std::cout << "Only printable chars are allowed." << std::endl;
}

bool valid_input(std::string str)
{
	size_t	len;

	len = 0;
	if (str.empty())
		return (print_error_msg(1), false);
	while (len < str.length())
	{
		if (!std::isalpha(str[len]))
			return (print_error_msg(1), false);
		len++;
	}
	return (true);
}

bool valid_number(std::string str)
{
	size_t	len;

	len = 0;
	if (str.empty())
		return (print_error_msg(2), false);
	if (str[len] == '+' && str.length() > 1)
		len++;
	while (len < str.length())
	{
		if (!std::isdigit(str[len]))
			return (print_error_msg(2), false);
		len++;
	}
	return (true);
}

bool valid_secret(std::string str)
{
	size_t	len;

	len = 0;
	if (str.empty())
		return (print_error_msg(3), false);
	while (len < str.length())
	{
		if (!std::isprint(str[len]))
			return (print_error_msg(3), false);
		len++;
	}
	return (true);
}

void PhoneBook::setContact(int index)
{
	std::string input;

	input.clear();
	while (std::cin && !valid_input(input))
		input = fill_value("Enter First Name: ");
	this->_list[index].setFirstName(input);
	input.clear();
	while (std::cin && !valid_input(input))
		input = fill_value("Enter Last Name: ");
	this->_list[index].setLastName(input);
	input.clear();
	while (std::cin && !valid_input(input))
		input = fill_value("Enter Nickname: ");
	this->_list[index].setNickname(input);
	input.clear();
	while (std::cin && !valid_number(input))
		input = fill_value("Enter Phone Number: ");
	this->_list[index].setNumber(input);
	input.clear();
	while (std::cin && !valid_secret(input))
		input = fill_value("Enter Darkest Secret: ");
	this->_list[index].setSecret(input);
}

void PhoneBook::getContact(int index)
{
	std::cout << "----------------Contact Info----------------" << std::endl;
	std::cout << "First name : "<< this->_list[index].getFirstName() << std::endl;
	std::cout << "Last name : "<< this->_list[index].getLastName() << std::endl;
	std::cout << "Nickname : "<< this->_list[index].getNickname() << std::endl;
	std::cout << "Phone Number : "<< this->_list[index].getNumber() << std::endl;
	std::cout << "Darkest Secret : "<< this->_list[index].getSecret() << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
}

std::string truncate_str(std::string text)
{
	std::string temp;

	temp = text.substr(0, 10);
	if (text.length() > 10)
		temp[9] = '.';
	return (temp);
}

void PhoneBook::printInfo(int counter)
{
	std::string index;

	std::cout << "Choose a index between 0 and 7." << std::endl;
	std::getline(std::cin, index);
	if (index.empty())
		std::cout << "Empty field. Misuse of the command." << std::endl;
	else
	{
		if (index.length() != 1 || !(index[0] >= '0' && index[0] <= '7'))
			std::cout << "Invalid index. Misuse of the command." << std::endl;
		else
		{
			if (index[0] - '0' <= counter)
				this->getContact(index[0] - '0');
			else
				std::cout << "Empty contact. Do more networking!" << std::endl;
		}
	}
}

void PhoneBook::getTable(int counter)
{
	int	i;

	i = -1;
	if (counter == -1)
		std::cout << "No contacts saved on the phonebook." << std::endl;
	else
	{
		std::cout << "-----Index------First-------Last---Nickname-" << std::endl;
		while (++i <= counter)
		{
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << truncate_str(this->_list[i].getFirstName()) << "|";
			std::cout << std::setw(10) << truncate_str(this->_list[i].getLastName()) << "|";
			std::cout << std::setw(10) << truncate_str(this->_list[i].getNickname()) << "|" << std::endl;
			std::cout << "--------------------------------------------" << std::endl;
		}
		this->printInfo(counter);
	}
}
