/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:59:58 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 17:17:10 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

Contact::Contact()
{
	std::cout << "Contact default constructor called." << std::endl;
}

Contact::Contact(std::string number, std::string first, std::string last, std::string nick, std::string secret): _number(number)
{
	this->_number = number;
	this->_firstName = first;
	this->_lastName = last;
	this->_secret = secret;
	this->_nickname = nick;
	std::cout << "Contact correct constructor called." << std::endl;
}

Contact::Contact(const Contact& og)
{
	std::cout << "Contact copy constructor called." << std::endl;
	*this = og;
}

Contact& Contact::operator=(const Contact& og)
{
	if (this != &og)
	{
		this->_number = og._number;
		this->_firstName = og._firstName;
		this->_lastName = og._lastName;
		this->_secret = og._secret;
		this->_nickname = og._nickname;
		std::cout << "Contact copy assignment operator called." << std::endl;
	}
	else
		std::cout << "Copy called to the same object. No actions are made." << std::endl;
	return (*this);
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
