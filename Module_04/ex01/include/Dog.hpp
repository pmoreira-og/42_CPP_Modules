/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:02:58 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 15:46:27 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*_mind;
	public:
		Dog();
		Dog(std::string name);
		Dog(Dog const & og);
		Dog & operator=(Dog const & ohter);
		~Dog();

		void	makeSound() const;
		Brain	*getBrain() const;
};