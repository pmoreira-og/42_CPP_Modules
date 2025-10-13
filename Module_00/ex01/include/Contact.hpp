/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:48:39 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 13:30:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Contact
{
	private:
		std::string _number;
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _secret;

	public:
		Contact();
		Contact(std::string number, std::string first, std::string last, std::string nick, std::string secret);
		Contact(const Contact& og);
		Contact& operator=(const Contact& og);

		std::string	getNumber();
		std::string	getFirstName();
		std::string	getLastName();
		std::string	getNickname();
		std::string	getSecret();
		void		setNumber(std::string value);
		void		setFirstName(std::string value);
		void		setLastName(std::string value);
		void		setNickname(std::string value);
		void		setSecret(std::string value);

};