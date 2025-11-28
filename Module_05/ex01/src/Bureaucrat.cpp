/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:31 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 11:38:49 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, const unsigned int grade) : _name(name), _grade(grade)
{
	this->checkValues();
	std::cout << "Bureaucrat assignment constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & og)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = og;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & other)
{
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string		Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade - 1 < 1)
		throw GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade + 1 > 150)
		throw GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::checkValues()
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	if (this->_grade > 150)
		throw GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & obj)
{
	os << obj.getName();
	os << ", bureaucrat grade ";
	os << obj.getGrade();
	os << ".";
	return (os);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade can't be any higher, max value permitted is 1.");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade can't be any lower, min value permitted is 150.");
}

void	Bureaucrat::signForm(Form & paper) const
{
	if (paper.getSignStatus())
	{
		std::cout << this->getName();
		std::cout << " couldn’t sign ";
		std::cout << paper.getName();
		std::cout << " because is already signed" << std::endl;
		return ;
	}
	try
	{
		paper.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName();
		std::cout << " couldn’t sign ";
		std::cout << paper.getName();
		std::cout << " because ";
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName();
	std::cout << " signed ";
	std::cout << paper.getName() << std::endl;
}