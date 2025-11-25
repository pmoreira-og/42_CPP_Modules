/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:05:30 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 12:29:33 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ICharacter;
#include "ICharacter.hpp"

//-‵,┊ color defines

#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"

#define BBLU "\e[1;34m"

#define URED "\e[4;31m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"

#define DEF "\e[0m"

class AMateria
{
	protected:
		std::string _type;
	public:
		AMateria();
		AMateria(std::string const & type);
		AMateria(AMateria const & og);
		AMateria & operator=(AMateria const & other);
		virtual ~AMateria();

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};