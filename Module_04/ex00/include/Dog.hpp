/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:58 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 13:02:00 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog const & og);
		Dog & operator=(Dog const & ohter);
		~Dog();

		void	makeSound() const;
};