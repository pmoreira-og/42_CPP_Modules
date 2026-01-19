/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:29:56 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/19 15:41:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <limits>
#include <cmath>
#define ERR_MSG "Please note that non-displayable characters should not be used as inputs."
#define ERR_INPUT "Invalid input detected."
typedef enum s_type
{
	CHAR,
	PSEUDO,
	INT,
	FLOAT,
	DOUBLE,
	ERROR
}	t_type;

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(std::string const & name);
		ScalarConverter(ScalarConverter const & og);
		ScalarConverter & operator=(ScalarConverter const & other);
		~ScalarConverter();
	public:
		static void converter(std::string const & input);
};
