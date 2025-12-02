/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/02 16:37:50 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/Intern.hpp"

int main(void) {
	std::cout << "---------------------- Testing ShrubberyCreationForm ----------------------" << std::endl;
	try {
		Bureaucrat bob("Bob", 137);
		Intern someRandomIntern;
		AForm* shrub;
		shrub = someRandomIntern.makeForm("shrubbery request", "Bender");
		if (!shrub)
			return (1);
		std::cout << bob << std::endl;
		std::cout << shrub << std::endl;
	
		bob.signForm(*shrub);
		bob.executeForm(*shrub);
		delete shrub;
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "---------------------- Testing RobotomyRequestForm ----------------------" << std::endl;
	try {
		Bureaucrat alice("Alice", 45);
		Intern someRandomIntern;
		AForm* robot;
		robot = someRandomIntern.makeForm("robotomy request", "Bender");
		if (!robot)
			return (1);
		std::cout << alice << std::endl;
		std::cout << robot << std::endl;
	
		alice.signForm(*robot);
		alice.executeForm(*robot);
		alice.executeForm(*robot);
		alice.executeForm(*robot);
		alice.executeForm(*robot);
		delete (robot);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "---------------------- Testing PresidentialPardonForm ----------------------" << std::endl;
	try {
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Arthur Dent");
	
		std::cout << president << std::endl;
		std::cout << pardon << std::endl;
	
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "---------------------- Testing Failures ----------------------" << std::endl;
	try {
		Bureaucrat intern("Intern", 150);
		ShrubberyCreationForm shrub2("garden");
	
		std::cout << intern << std::endl;
		intern.signForm(shrub2);
		intern.executeForm(shrub2);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try {
		Bureaucrat bob("Bob", 138);
		ShrubberyCreationForm shrub("home");
	
		std::cout << bob << std::endl;
		std::cout << shrub << std::endl;
	
		bob.signForm(shrub);
		bob.executeForm(shrub);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-----------------------2----------------------" << std::endl;
	try {
		Bureaucrat alice("Alice", 46);
		RobotomyRequestForm robot("Bender");
	
		std::cout << alice << std::endl;
		std::cout << robot << std::endl;
	
		alice.signForm(robot);
		alice.executeForm(robot);
		alice.executeForm(robot);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-----------------------3----------------------" << std::endl;
	try {
		Bureaucrat president("President", 100);
		PresidentialPardonForm pardon("Arthur Dent");
	
		std::cout << president << std::endl;
		std::cout << pardon << std::endl;
	
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	std::cout << "-----------------------4----------------------" << std::endl;
	try {
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Arthur Dent");
	
		std::cout << president << std::endl;
		std::cout << pardon << std::endl;
	
		president.executeForm(pardon);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}
	try
	{
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}
