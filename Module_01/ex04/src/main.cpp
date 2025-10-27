/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 16:32:25 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/27 16:08:58 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Sed.hpp"

void	replacer(std::string & buffer, std::string & target, std::string & text)
{
	size_t	i;

	if (target.empty())
		return;
	i = 0;
	while (buffer[i] && (i != std::string::npos))
	{
		i = buffer.find(target, i);
		if (i == std::string::npos)
			break;
		buffer.erase(i, target.length());
		if (!text.empty())
			buffer.insert(i, text);
	}
}

int main(int ac, char const *av[])
{
	if (ac != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (0);
	}
	std::ifstream infile(av[1]);
	if (!infile)
	{
		std::cerr << "Couldn't open the infile" << std::endl;
		return (1);
	}
	std::string out = av[1];
	out.append(".replace");
	std::ofstream outfile(out.c_str());
	if (!outfile)
	{
		std::cerr << "Couldn't make the outfile" << std::endl;
		return (1);
	}
	std::string buffer;
	std::string target = av[2];
	std::string text = av[3];
	while(std::getline(infile, buffer))
	{
		replacer(buffer, target, text);
		outfile << buffer;
		if (!infile.eof())
			outfile << std::endl;
	}
	return (0);
}
