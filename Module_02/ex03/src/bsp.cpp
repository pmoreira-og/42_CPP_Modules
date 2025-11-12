/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:42:59 by pmoreira          #+#    #+#             */
/*   Updated: 2025/11/12 16:11:20 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

Fixed	getArea(Point const a, Point const b, Point const c)
{
	return
	(
		Fixed(0.5f) *
		(a.getX() * (b.getY() - c.getY()) + 
		b.getX() * (c.getY() - a.getY()) +
		c.getX() * (a.getY() - b.getY()))
	);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	
}