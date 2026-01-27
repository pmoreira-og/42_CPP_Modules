/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:19:57 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 12:47:07 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include <limits>
#include <stdlib.h>
struct Data
{
	int	value;
};

#define USAGE "Usage: ./serializer <integer>"

class Serializer
{
	private:
		Serializer();
		Serializer(std::string const & serial);
		Serializer(Serializer const & og);
		Serializer & operator=(Serializer const & other);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


