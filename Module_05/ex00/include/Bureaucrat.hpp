/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:53 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/27 13:45:17 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat
{
	private:
		const std::string	_name;
		unsigned int		_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string const & name);
		Bureaucrat(std::string const & name, const unsigned int grade);
		Bureaucrat(Bureaucrat const & og);
		Bureaucrat & operator=(Bureaucrat const & other);
		~Bureaucrat();

		std::string		getName() const;
		unsigned int	getGrade() const;
		void			incrementGrade();
		void			decrementGrade();
		void			checkValues();

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

std::ostream & operator<<(std::ostream & os, const Bureaucrat & obj);