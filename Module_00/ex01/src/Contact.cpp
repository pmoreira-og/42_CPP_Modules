/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:59:58 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/14 11:41:55 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact default constructor called." << std::endl;
}

Contact::~Contact()
{
	std::cout << "Contact default destructor called." << std::endl;
}

std::string	Contact::getNumber()
{
	return (this->_number);
}

std::string Contact::getFirstName()
{
	return (this->_firstName);
}

std::string Contact::getLastName()
{
	return (this->_lastName);
}

std::string Contact::getSecret()
{
	return (this->_secret);
}

std::string Contact::getNickname()
{
	return (this->_nickname);
}

void	Contact::setNumber(std::string value)
{
	this->_number = value;
}

void Contact::setFirstName(std::string value)
{
	this->_firstName = value;
}

void Contact::setLastName(std::string value)
{
	this->_lastName = value;
}

void Contact::setSecret(std::string value)
{
	this->_secret = value;
}

void Contact::setNickname(std::string value)
{
	this->_nickname = value;
}
