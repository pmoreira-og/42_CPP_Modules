/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:12:09 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/22 13:01:26 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*array;
	int		i;

	if (N <= 0)
		return (NULL);
	array = new Zombie[N];
	if (!array)
		return (NULL);
	i = -1;
	while(++i < N)
		array[i].setName(name);
	return (array);
}