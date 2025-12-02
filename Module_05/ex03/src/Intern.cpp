/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/02 16:02:02 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 16:28:02 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(std::string & name)
{
	std::cout << "Intern assignment constructor called" << std::endl;
	static_cast<void> (name);
}

Intern::Intern(Intern const & og)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = og;
}

Intern & Intern::operator=(Intern const & other)
{
	std::cout << "Intern copy assignment operator called" << std::endl;
	if (this != &other)
	{
		
	}
	return (*this);
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

t_form	getFormType(std::string const & name)
{
	std::string	options[4] = {"robotomy request", "shrubbery request", "presidential request"};
	int	i;

	i = -1;
	while(++i < 3)
	{
		if (name == options[i])
			break ;
	}
	return ((t_form) i);
}

AForm * Intern::makeForm(std::string const & name, std::string const & target)
{
	t_form	type;

	type = getFormType(name);
	switch (type)
	{
		case ROBOTOMY:
			return (new RobotomyRequestForm(target));
		// fall
		case SHRUBBERY:
			return (new ShrubberyCreationForm(target));
		// fall
		case PRESIDENTIAL:
			return (new PresidentialPardonForm(target));
		// fall
		default:
			return (NULL);
	}
}
