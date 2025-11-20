/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 13:02:11 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal();
		Animal(std::string name);
		Animal(Animal const & og);
		Animal & operator=(Animal const & ohter);
		virtual ~Animal();

		virtual void	makeSound() const;
		std::string		getType() const;
};
