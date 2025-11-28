/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:47:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 11:03:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Bureaucrat;
#include <iostream>

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
	public:
		Form();
		Form(std::string const & name, const unsigned int sign, const unsigned int exec);
		Form(Form const & og);
		Form & operator=(Form const & other);
		~Form();

		void			checkValues() const;
		std::string		getName() const;
		bool			getSignStatus() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecGrade() const;
		void			beSigned(Bureaucrat const & signatory);
		

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw(); 
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw(); 
	};
};

std::ostream & operator<<(std::ostream & os, const Form & obj);
