/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:25:03 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/26 14:35:49 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(std::string const & serial)
{
	static_cast<void> (serial);
}
Serializer::Serializer(Serializer const & og)
{
	*this = og;
}
Serializer & Serializer::operator=(Serializer const & other)
{
	if (this != &other)
		static_cast<void> (other);
	return (*this);
}

Serializer::~Serializer()
{
}

uintptr_t Serializer::serialize(Data* ptr)
{
	
}

Data* Serializer::deserialize(uintptr_t raw)
{
	
}
