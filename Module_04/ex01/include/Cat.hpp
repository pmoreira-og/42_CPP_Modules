/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:01 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 15:46:33 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*_mind;
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat const & og);
		Cat & operator=(Cat const & ohter);
		~Cat();

		void	makeSound() const;
		Brain	*getBrain() const;
};
