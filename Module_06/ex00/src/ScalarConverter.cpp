/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:36:27 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/16 15:18:06 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	
}

ScalarConverter::ScalarConverter(std::string const & name)
{
	(void) name;
}

ScalarConverter::ScalarConverter(ScalarConverter const & og)
{
	*this = og;
}

ScalarConverter & ScalarConverter::operator=(ScalarConverter const & other)
{
	if (this != &other)
		(void) other;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{
	
}

static bool	isValid(std::string const & input)
{
	if (input.empty())
		return (false);
	for (size_t i = 0; i < input.length(); i++)
	{
		if (!isprint(input[i]))
			return (false);
	}
	return (true);
}

static t_type	getType(std::string const & input)
{
	if (input.length() == 1 && !isdigit(input.at(0)))
		return (CHAR);
	else if (input == "-inff" || input == "+inff" || input == "nanf" || input == "-inf" || input == "+inf" || input == "nan")
		return (PSEUDO);
	
}

static void	pseudoPrint(std::string const & input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input.substr(0, 4 - (input.at(0) == 'n')) << "f" << std::endl;
	std::cout << "double: " << input.substr(0, 4 - (input.at(0) == 'n')) << std::endl;
}

void ScalarConverter::converter(std::string const & input)
{
	if (!isValid(input))
	{
		std::cout << ERR_MSG << std::endl;
		return ;
	}
	t_type type = getType(input);
	switch (type)
	{
	case PSEUDO:
		pseudoPrint(input);
		break;
	
	default:
		break;
	}
}
