/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 10:24:41 by pmoreira          #+#    #+#             */
/*   Updated: 2025/12/03 11:14:47 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Bureaucrat.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

int main(void) {
	std::cout << "---------------------- Testing ShrubberyCreationForm ----------------------" << std::endl;
	try {
		Bureaucrat bob("Bob", 137);
		ShrubberyCreationForm shrub("home");
	
		std::cout << bob << std::endl;
		std::cout << shrub << std::endl;
	
		bob.signForm(shrub);
		bob.executeForm(shrub);
	}
	catch (const std::exception &e) {
		std::cout << "Exception: " << e.what() << std::endl;
	}

	std::cout << "---------------------- Testing RobotomyRequestForm ----------------------" << std::endl;
	try {
		Bureaucrat alice("Alice", 45);
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
		Bureaucrat recruit("Recruit", 150);
		ShrubberyCreationForm shrub2("garden");
	
		std::cout << recruit << std::endl;
		recruit.signForm(shrub2);
		recruit.executeForm(shrub2);
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
	return 0;
}
