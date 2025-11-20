/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:32:00 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 16:25:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(std::string name)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = name;
	std::cout << "Brain assignment constructor called" << std::endl;
}

Brain::Brain(Brain const & og)
{
	*this = og;
	std::cout << "Brain copy constructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & other)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for(int i = 0; i < 100; i++)
			this->_ideas[i] = other._ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string	Brain::getIdea(int index) const
{
	if (0 <= index  && index <= 99)
		return (this->_ideas[index]);
	return (NULL);
}

void	Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}