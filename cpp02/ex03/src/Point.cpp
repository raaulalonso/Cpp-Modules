/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:50:06 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/28 17:04:09 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point(void): x(0), y(0) {}

Point::Point(const float _x, const float _y): x(_x), y(_y) {}

Point::Point(Point &p): x(p.x), y(p.y) {}

Point::~Point() {}

Point &Point::operator=(const Point &p)
{
	if (this != &p) {
		(Fixed)this->x = p.x;
		(Fixed)this->y = p.y;
	}
	return *this;
}

Fixed Point::getX(void) const
{
	return ((Fixed)this->x);
}

Fixed Point::getY(void) const
{
	return ((Fixed)this->y);
}
