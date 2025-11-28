/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/28 11:56:39 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		Form	roadForm = Form();
		Form	midForm = Form("mid", 75, 150);
		Form	highForm = Form("high", 1, 1);
		john.decrementGrade();
		std::cout << john << std::endl;
		std::cout << random << std::endl;
		random.signForm(roadForm);
		john.signForm(roadForm);
		random.signForm(midForm);
		john.signForm(midForm);
		random.signForm(highForm);
		john.signForm(highForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------2----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		Form	roadForm = Form();
		Form	midForm = Form("mid", 75, 151);
		Form	highForm = Form("high", 1, 1);
		std::cout << john << std::endl;
		std::cout << random << std::endl;
		random.signForm(roadForm);
		john.signForm(roadForm);
		random.signForm(midForm);
		john.signForm(midForm);
		random.signForm(highForm);
		john.signForm(highForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------3----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		Form	roadForm = Form();
		Form	midForm = Form("mid", 75, 150);
		Form	highForm = Form("high", 0, 1);
		std::cout << john << std::endl;
		std::cout << random << std::endl;
		random.signForm(roadForm);
		john.signForm(roadForm);
		random.signForm(midForm);
		john.signForm(midForm);
		random.signForm(highForm);
		john.signForm(highForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------------------4----------------------" << std::endl;
	try
	{
		Bureaucrat john = Bureaucrat("john", 1);
		Bureaucrat random = Bureaucrat();
		Form	roadForm = Form();
		Form	midForm = Form("mid", 75, 150);
		Form	highForm = Form("high", 1, 1);
		std::cout << john << std::endl;
		std::cout << random << std::endl;
		random.signForm(roadForm);
		john.signForm(roadForm);
		random.signForm(midForm);
		john.signForm(midForm);
		random.signForm(highForm);
		john.signForm(highForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
