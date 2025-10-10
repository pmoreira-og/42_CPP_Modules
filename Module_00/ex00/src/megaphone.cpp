/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:50:04 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/10 11:15:28 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

unsigned char	ft_toupper(int c)
{
	return ((unsigned char) c - 32);
}

void	ft_shout(char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			std::cout << ft_toupper(*s);
		else
			std::cout << *s;
		s++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	i = 0;
	while (av[++i])
	{
		ft_shout(av[i]);
		if (av[i + 1])
		std::cout << " ";
	}
	std::cout << std::endl;
	return (0);
}
