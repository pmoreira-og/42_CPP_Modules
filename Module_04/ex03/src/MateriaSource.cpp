/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:30:16 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 14:42:01 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & og)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	
}

MateriaSource & MateriaSource::operator=(MateriaSource const & other)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	
}

void MateriaSource::learnMateria(AMateria* mat)
{
	
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	
}
