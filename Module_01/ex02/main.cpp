/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 13:45:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 12:34:08 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>

int main(void)
{
	std::string text = "HI THIS IS BRAIN";
	std::string *stringPTR = &text;
	std::string &stringREF = text;

	std::cout << std::setw(12) << "&text:" << &text << std::endl;
	std::cout << std::setw(12) << "stringPTR:" << stringPTR << std::endl;
	std::cout << std::setw(12) << "&stringREF:" << &stringREF << std::endl;
	std::cout << std::endl << "-------------------------------------" << std::endl;
	std::cout << std::setw(12) << "text:" << text << std::endl;
	std::cout << std::setw(12) << "*stringPTR:" << *stringPTR << std::endl;
	std::cout << std::setw(12) << "stringREF:" << stringREF << std::endl;
	return 0;
}
