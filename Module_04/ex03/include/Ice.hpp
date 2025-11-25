/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:17:35 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 11:46:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(std::string const & type);
		Ice(Ice const & og);
		Ice & operator=(Ice const & other);
		~Ice();

		std::string const & getType() const;
		AMateria* clone() const;
		void use(ICharacter& target);
};
