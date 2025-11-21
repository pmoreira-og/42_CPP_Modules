/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 12:43:43 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 13:02:45 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;

	public:
		WrongAnimal();
		WrongAnimal(std::string name);
		WrongAnimal(WrongAnimal const & og);
		WrongAnimal & operator=(WrongAnimal const & ohter);
		~WrongAnimal();

		void		makeSound() const;
		std::string	getType() const;
};