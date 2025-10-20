/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 10:50:04 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/20 12:48:48 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	ft_shout(std::string str)
{
	size_t	len;

	len = 0;
	while (len < str.length())
	{
		std::cout << (unsigned char) std::toupper(str[len]);
		len++;
	}
}

int	main(int ac, char **av)
{
	int			i;
	std::string	text;

	if (ac < 2)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl, 0);
	i = 0;
	while (av[++i])
	{
		text = av[i];
		ft_shout(text);
	}
	std::cout << std::endl;
	return (0);
}
