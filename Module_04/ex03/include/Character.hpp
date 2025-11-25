/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 11:33:46 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/25 11:46:32 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string		_name;
		AMateria		*_inv[4];
		static AMateria	*_floor;
		static void		_cleanFloor( void );

	public:
		Character();
		Character(std::string const & name);
		Character(Character const & og);
		Character & operator=(Character const & other);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

		void cleanInv();
		void copyInv(Character const & og);
};
