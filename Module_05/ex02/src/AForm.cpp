/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:47:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 12:02:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AForm.hpp"

AForm::AForm() : _name("A random Aform"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "AForm default constructor called" << std::endl;
}

AForm::AForm(std::string const & name, const unsigned int sign, const unsigned int exec)
: _name(name), _signed(false), _signGrade(sign), _execGrade(exec)
{
	this->checkValues();
	std::cout << "AForm assignment constructor called" << std::endl;
}

AForm::AForm(AForm const & og)
: _name(og._name), _signed(og._signed), _signGrade(og._signGrade), _execGrade(og._execGrade)
{
	this->checkValues();
	std::cout << "AForm copy constructor called" << std::endl;
	*this = og;
}

AForm & AForm::operator=(AForm const & other)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_signed = other._signed;
	}
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool			AForm::getSignStatus() const
{
	return (this->_signed);
}

unsigned int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

unsigned int	AForm::getExecGrade() const
{
	return (this->_execGrade);
}

void	AForm::checkValues() const
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw GradeTooHighException();
	if (this->_signGrade > 150 || this->_execGrade > 150)
		throw GradeTooLowException();
}

void	AForm::beSigned(Bureaucrat const & signatory)
{
	if (signatory.getGrade() <= this->_signGrade)
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, const AForm & obj)
{
	os << "Form::_name: " << obj.getName() << std::endl;
	os << "Form::_signed: " << obj.getSignStatus() << std::endl;
	os << "Form::_signGrade: " << obj.getSignGrade() << std::endl;
	os << "Form::_execGrade: " << obj.getExecGrade() << std::endl;
	return (os);
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade can't be any higher, max value permitted is 1.");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade can't be any lower, min value permitted is 150.");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("Form isn't signed.");
}
