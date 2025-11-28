/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 09:47:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 14:29:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class AForm
{
	protected:
		const std::string	_name;
		bool				_signed;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
	public:
		AForm();
		AForm(std::string const & name, const unsigned int sign, const unsigned int exec);
		AForm(AForm const & og);
		AForm & operator=(AForm const & other);
		virtual ~AForm();

		void			checkValues() const;
		std::string		getName() const;
		bool			getSignStatus() const;
		unsigned int	getSignGrade() const;
		unsigned int	getExecGrade() const;
		void			beSigned(Bureaucrat const & signatory);
		void	execute(Bureaucrat const &executor) const;

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

std::ostream & operator<<(std::ostream & os, const AForm & obj);
