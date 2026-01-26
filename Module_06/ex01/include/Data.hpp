/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 14:26:42 by pmoreira          #+#    #+#             */
/*   Updated: 2026/01/26 14:34:04 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Data
{
	private:
		int	_value;
	public:
		Data();
		Data(int const & value);
		Data(Data const & og);
		Data & operator=(Data const & other);
		~Data();
		int getValue() const;
};
