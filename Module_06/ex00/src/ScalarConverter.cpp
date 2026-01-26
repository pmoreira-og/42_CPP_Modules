/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:36:27 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/26 14:15:08 by pmoreira         ###   ########.fr       */
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
	char *endptr = NULL;
	size_t length = input.length();

	if (length == 1 && !isdigit(input.at(0)))
		return (CHAR);
	else if (input == "-inff" || input == "+inff" || input == "nanf" || input == "-inf" || input == "+inf" || input == "nan")
		return (PSEUDO);
	else if (input.find('.') == std::string::npos)
	{
		if (input.find_first_not_of("1234567890-+") != std::string::npos)
			return (ERROR);
		double value = std::strtod(input.c_str(), &endptr);
		if (endptr && *endptr)
			return (ERROR);
		if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
			return (ERROR);
		return (INT);
	}
	else if (input.at(length - 1) == 'f')
	{
		if ((input.find_first_of("f") != input.find_last_of("f")) || length < 3)
			return (ERROR);
		if (input.find_first_not_of("+-1234567890.f") != std::string::npos)
			return (ERROR);
		double value = std::strtod(input.c_str(), &endptr);
		if ((endptr && *endptr != 'f') || !isdigit(*(endptr - 1))
		|| value == HUGE_VAL || value == -HUGE_VAL
		|| value > std::numeric_limits<float>::max() 
			|| value < -std::numeric_limits<float>::max())
			return (ERROR);
		return (FLOAT);
	}
	else
	{
		if (length < 3)
			return (ERROR);
		if (input.find_first_not_of("+-1234567890.") != std::string::npos)
			return (ERROR);
		double value = std::strtod(input.c_str(), &endptr);
		if ((endptr && *endptr) || !isdigit(*(endptr - 1))
		|| value == HUGE_VAL || value == -HUGE_VAL)
			return (ERROR);
		return (DOUBLE);
	}
}

static void	pseudoPrint(std::string const & input)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << input.substr(0, 4 - (input.at(0) == 'n')) << "f" << std::endl;
	std::cout << "double: " << input.substr(0, 4 - (input.at(0) == 'n')) << std::endl;
}

static void charPrinter(std::string const & input)
{
	if (!input.empty() && isprint(input.at(0)))
		std::cout << "char: '" << input.at(0) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int> (input.at(0)) << std::endl;
	std::cout << "float: " << static_cast<float> (input.at(0)) << "f" << std::endl;
	std::cout << "double: " << static_cast<double> (input.at(0)) << std::endl;
}

static void integerPrinter(std::string const & input)
{
	int number;

	number = atoi(input.c_str());
	if (!(number > 255 || number < 0) && isprint(number))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << number << std::endl;
	std::cout << "float: " << static_cast<float> (number) << "f" << std::endl;
	std::cout << "double: " << static_cast<double> (number) << std::endl;
}

static void floatPrinter(std::string const & input)
{
	float	number;

	number = std::strtof(input.c_str(), NULL);
	if (!(number > 255 || number < 0) && isprint(number))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int> (number) << std::endl;
	std::cout << "float: " << number << "f" << std::endl;
	std::cout << "double: " << static_cast<double> (number) << std::endl;
}

static void doublePrinter(std::string const & input)
{
	double	number;

	number = std::strtod(input.c_str(), NULL);
	if (!(number > 255 || number < 0) && isprint(number))
		std::cout << "char: '" << static_cast<char> (number) << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int> (number) << std::endl;
	std::cout << "float: " << static_cast<float> (number) << "f" << std::endl;
	std::cout << "double: " << number << std::endl;
}

void ScalarConverter::converter(std::string const & input)
{
	if (!isValid(input))
	{
		std::cout << ERR_MSG << std::endl;
		return ;
	}
	t_type type = getType(input);
	std::cout << std::fixed << std::setprecision(1) << std::endl;
	switch (type)
	{
		case PSEUDO:
			return (pseudoPrint(input));
		case CHAR:
			return (charPrinter(input));
		case INT:
			return (integerPrinter(input));
		case FLOAT:
			return (floatPrinter(input));
		case DOUBLE:
			return (doublePrinter(input));
		case ERROR:
			std::cout << ERR_INPUT << std::endl;
			break;
		default:
			break;
	}
}
