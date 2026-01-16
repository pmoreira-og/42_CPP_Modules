/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:29:56 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/16 14:10:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#define ERR_MSG "Please note that non-displayable characters should not be used as inputs."

typedef enum s_type
{
	CHAR,
	PSEUDO,
	INT,
	FLOAT,
	DOUBLE
} t_type;

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
