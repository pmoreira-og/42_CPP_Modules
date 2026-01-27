/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:34:23 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/27 15:52:13 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>

template <typename T>
void iter(T *array, const unsigned int len, void (*func)(T & item))
{
	for (unsigned int i = 0; i < len; i++)
	{
		func(array[i]);
	}
}

template <typename T>
void	print(T & item)
{
	std::cout << item << " ";
}

template <typename T>
void	invert(T & item)
{
	if (-std::numeric_limits<T>::max() >= item || std::numeric_limits<T>::max() < item)
		return;
	item = -item;
}