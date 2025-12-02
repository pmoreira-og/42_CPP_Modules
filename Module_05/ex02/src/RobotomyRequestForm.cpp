/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 13:41:48 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 14:23:24 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("Nameless_form", 72, 45), _target("Unknown")
{
	std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target)
: AForm(target + "_form", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm assignment constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & og)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = og;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & other)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signed = other._signed;
		this->_target = other._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSignStatus())
		throw FormNotSignedException();
	if (this->_execGrade < executor.getGrade())
		throw GradeTooLowException();
	static bool success;
	if (success)
	{
		std::cout << this->getTarget();
		std::cout << " has been robotomized successfully." << std::endl;
	}
	else
	{
		std::cout << this->getTarget();
		std::cout << " robotomy failed" << std::endl;
	}
	success = !success;
}