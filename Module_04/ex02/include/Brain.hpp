/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:27:26 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/20 16:02:34 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(std::string name);
		Brain(Brain const & og);
		Brain & operator=(Brain const & other);
		~Brain();

		std::string	getIdea(int index) const;
		void	setIdea(int index, std::string idea);
};
