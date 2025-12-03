/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:47:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/03 10:50:28 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Form::Form() : _name("A random form"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string const & name, const unsigned int sign, const unsigned int exec)
: _name(name), _signed(false), _signGrade(sign), _execGrade(exec)
{
	this->checkValues();
	std::cout << "Form assignment constructor called" << std::endl;
}

Form::Form(Form const & og)
: _name(og._name), _signed(og._signed), _signGrade(og._signGrade), _execGrade(og._execGrade)
{
	this->checkValues();
	std::cout << "Form copy constructor called" << std::endl;
	*this = og;
}

Form & Form::operator=(Form const & other)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return (*this);
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool			Form::getSignStatus() const
{
	return (this->_signed);
}

unsigned int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

unsigned int	Form::getExecGrade() const
{
	return (this->_execGrade);
}

void	Form::checkValues() const
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw GradeTooHighException();
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw GradeTooLowException();
}

void	Form::beSigned(Bureaucrat const & signatory)
{
	if (signatory.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw Bureaucrat::GradeIsNotEnoughException();
}

std::ostream & operator<<(std::ostream & os, const Form & obj)
{
	os << "Form::_name: " << obj.getName() << std::endl;
	os << "Form::_signed: " << obj.getSignStatus() << std::endl;
	os << "Form::_signGrade: " << obj.getSignGrade() << std::endl;
	os << "Form::_execGrade: " << obj.getExecGrade() << std::endl;
	return (os);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form grade can't be any higher, max value permitted is 1.");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form grade can't be any lower, min value permitted is 150.");
}