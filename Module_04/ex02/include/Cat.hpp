/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:01 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:47:47 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
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
