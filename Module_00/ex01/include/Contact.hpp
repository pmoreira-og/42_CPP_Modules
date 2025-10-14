/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:48:39 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/14 11:41:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <csignal>
#include <stdlib.h>

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
		~Contact();

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
