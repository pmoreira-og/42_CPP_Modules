/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:42:59 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/13 16:08:29 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c)
{
	Fixed area;

	area = ((a.getX() * b.getY()) - (a.getX() * c.getY()) + \
			(b.getX() * c.getY()) - (b.getX() * a.getY()) + \
			(c.getX() * a.getY()) - (c.getX() * b.getY())) / 2;
	return (area.abs());
}

bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	if (point == a || point == b || point == c)
		return (false);
	Fixed total = getArea(a, b, c);
	Fixed sector1 = getArea(a, b, point);
	Fixed sector2 = getArea(b, c, point);
	Fixed sector3 = getArea(c, a, point);
	if (sector1 == 0 || sector2 == 0 || sector3 == 0)
		return (false);
	if (total == (sector1 + sector2 + sector3))
		return (true);
	return (false);
}