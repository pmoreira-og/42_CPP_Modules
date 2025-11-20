/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:01 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 13:02:05 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(std::string name);
		Cat(Cat const & og);
		Cat & operator=(Cat const & ohter);
		~Cat();

		void	makeSound() const;
};
