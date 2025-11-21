/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:30:16 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 15:03:16 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
		this->_storage[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & og)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (size_t i = 0; i < 4; i++)
	{
		if (og._storage[i])
			this->_storage[i] = og._storage[i]->clone();
		else
			this->_storage[i] = NULL;
	}
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_storage[i])
				delete (this->_storage[i]);
			this->_storage[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
		{
			if (other._storage[i])
				this->_storage[i] = other._storage[i]->clone();
			else
				this->_storage[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_storage[i])
			delete (this->_storage[i]);
		this->_storage[i] = NULL;
	}
}

void MateriaSource::learnMateria(AMateria* mat)
{
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}
