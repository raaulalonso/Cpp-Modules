/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:50:00 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/28 17:06:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H
# include <iostream>
# include "Fixed.hpp"

class Point
{
	private:
		const Fixed x;
		const Fixed y;
	
	public:
		Point(void);
		Point(const float _x, const float _y);
		Point(Point &p);
		~Point(void);
		Point &operator=(const Point &p);

		Fixed getX(void) const;
		Fixed getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif