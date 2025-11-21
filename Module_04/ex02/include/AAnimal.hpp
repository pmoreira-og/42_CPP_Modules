/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:03:05 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/21 13:34:40 by pmoreira         ###   ########.fr       */
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

		virtual void	makeSound() const = 0;
		std::string		getType() const;
};
