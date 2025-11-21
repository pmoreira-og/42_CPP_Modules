/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 10:49:59 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal();
		AAnimal(std::string name);
		AAnimal(AAnimal const & og);
		AAnimal & operator=(AAnimal const & ohter);
		virtual ~AAnimal();

		virtual void	makeSound() const = 0; // pure virtual
		std::string		getType() const;
};
