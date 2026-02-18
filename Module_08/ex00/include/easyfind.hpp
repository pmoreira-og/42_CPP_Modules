/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:34:17 by pmoreira          #+#    #+#             */
/*   Updated: 2026/02/18 14:12:15 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
void	containerPrinter(T container)
{
	int	index = 0;
	for (typename T::iterator i = container.begin(); container.end(); i++)
	{
		std::cout << "[" << index << "] :" << *i << std::endl;
	}
}

template <typename T>
int	easyfind(T container, int to_find)
{
	typename T::iterator	target;
	target = std::find(container.begin(), container.end(), to_find);
	if (target != container.end())
		return (*target);
	else
		throw (std::out_of_range("Target not found in the container."));
}