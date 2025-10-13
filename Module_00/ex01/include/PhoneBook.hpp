/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:45:49 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/13 16:04:56 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_list[8];

	public:
		PhoneBook();
		PhoneBook(const PhoneBook& og);
		PhoneBook& operator=(const PhoneBook& og);
		void getTable(int index, int counter);
		void getContact(int index);
		void setContact(int index);
		void printInfo(int counter);
};
