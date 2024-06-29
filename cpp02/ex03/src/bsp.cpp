/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:49:39 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/28 17:10:22 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

Fixed getDet(const Point& v1, const Point& v2, const Point& point)
{
	return ((v2.getX() - v1.getX()) * (point.getY() - v1.getY()) - (v2.getY() - v1.getY()) * (point.getX() - v1.getX()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed det1 = getDet(a, b, point);
	Fixed det2 = getDet(b, c, point);
	Fixed det3 = getDet(c, a, point);

	if (det1.toFloat() > 0 && det2.toFloat() > 0 && det3.toFloat() > 0)
		return (true);
	else
		return (false);
}