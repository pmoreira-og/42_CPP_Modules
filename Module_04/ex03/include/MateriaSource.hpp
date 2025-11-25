/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:30:18 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 10:55:12 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_storage[4];

	public:
		MateriaSource();
		MateriaSource(std::string & name);
		MateriaSource(MateriaSource const & og);
		MateriaSource & operator=(MateriaSource const & other);
		~MateriaSource();
		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const & type);
};
