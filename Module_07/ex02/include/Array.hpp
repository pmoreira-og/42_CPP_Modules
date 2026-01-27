/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:40:24 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 17:03:09 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
class Array
{
	private:
		T	*_array;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int const n);
		Array(Array const & og);
		Array & operator=(Array const & other);
		~Array();
};

Array::Array() : _array()
{
}

Array::~Array()
{
}
