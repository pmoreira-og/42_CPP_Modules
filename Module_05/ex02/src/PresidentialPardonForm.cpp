/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:10 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 14:43:52 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Nameless_form", 25, 5)
{
	std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target)
: AForm(target + "_form", 25, 5)
{
	std::cout << "PresidentialPardonForm assignment constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & og)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = og;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->_execGrade < executor.getGrade())
		throw GradeTooLowException();
	// <bureaucrat> executed <form>
	std::cout << executor.getName();
}