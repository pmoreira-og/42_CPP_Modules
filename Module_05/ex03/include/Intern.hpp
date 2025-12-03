/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 15:51:46 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/03 09:54:23 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

typedef enum e_form
{
	ROBOTOMY,
	SHRUBBERY,
	PRESIDENTIAL,
	NONE
}	t_form;

class Intern
{
	public:
		Intern();
		Intern(std::string & name);
		Intern(Intern const & og);
		Intern & operator=(Intern const & other);
		~Intern();

		AForm *makeForm(std::string const & name, std::string const & target);

	class InvalidFormRequestException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};
