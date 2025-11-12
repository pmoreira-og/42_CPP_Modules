/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:06:16 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/12 16:29:31 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Fixed.hpp"
class Point
{
	private:
		Fixed	_x;
		Fixed	_y;

	public:
		Point();
		Point(const float x, const float y);
		Point(Point const & og);
		Point & operator=(Point const & og);
		~Point();
		Fixed getX() const;
		Fixed getY() const;
		bool operator==(Point const & other) const;
};
