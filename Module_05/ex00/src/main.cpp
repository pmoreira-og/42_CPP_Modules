/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/03 10:53:29 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		john.decrementGrade();
		john.incrementGrade();
		random.decrementGrade();
		std::cout << john << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------2----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		john.decrementGrade();
		john.incrementGrade();
		john.incrementGrade();
		random.decrementGrade();
		std::cout << john << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------3----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 151);
		Bureaucrat random = Bureaucrat();
		john.decrementGrade();
		random.decrementGrade();
		std::cout << john << std::endl;
		std::cout << random << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "-----------------------4----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat("bob", 151);
		john.decrementGrade();
		random.decrementGrade();
		std::cout << john << std::endl;
		std::cout << random << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------5---------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat *random = new Bureaucrat("bob", 151);
		john.decrementGrade();
		random->decrementGrade();
		std::cout << john << std::endl;
		std::cout << random << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "------------------------6---------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		john.decrementGrade();
		std::cout << john << std::endl;
		std::cout << random << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}
