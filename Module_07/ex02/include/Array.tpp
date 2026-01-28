/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:45:45 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/28 17:30:02 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(new T[0]), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]), _size(n)
{
}

template <typename T>
Array<T>::Array(Array const & og)
{
	this->_array = NULL;
	*this = og;
}

template <typename T>
Array<T> & Array<T>::operator=(Array const & other)
{
	if (this != &other)
	{
		this->_size = other.size();
		if (this->_array)
			delete [] (this->_array);
		this->_array = new T[this->_size];
		for (unsigned int i = 0; i < this->_size; i++)
			this->_array[i] = other._array[i];
	}
	return (*this);
}

template <typename T>
T & Array<T>::operator[](unsigned int index)
{
	if (index >= this->size())
		throw (std::out_of_range("index requested is out of range."));
	return (this->_array[index]);
}

template <typename T>
Array<T>::~Array()
{
	delete [] (this->_array);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size);
}