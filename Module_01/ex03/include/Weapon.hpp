/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:39:17 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/23 15:13:57 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#pragma once

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon(std::string type);
		std::string & getType(void);
		void setType(std::string type);
};