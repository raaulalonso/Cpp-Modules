/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:00:04 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/28 17:29:05 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

void printAxis(Point a, Point b, Point c, Point p)
{
	for (int y = 10; y >= -10; y--)
	{
		for (int x = -10; x <= 10; x++)
		{
			if (x == a.getX().toInt() && y == a.getY().toInt())
				std::cout << "A";
			else if (x == b.getX().toInt() && y == b.getY().toInt())
				std::cout << "B";
			else if (x == c.getX().toInt() && y == c.getY().toInt())
				std::cout << "C";
			else if (x == p.getX().toInt() && y == p.getY().toInt())
				std::cout << "P";
			else if (x == 0 && y == 0)
				std::cout << "+";
			else if (x == 0)
				std::cout << "|";
			else if (y == 0)
				std::cout << "-";
			else
				std::cout << " ";
		}
		std::cout << std::endl;
	}
}

int main(void)
{
	Point a(1, 1);
	Point b(8, 2);
	Point c(2.5, 5);
	//Point p(7, 6); // outside triangle
	Point p(3, 2); // inside triangle

	printAxis(a, b, c, p);

	if (bsp(a, b, c, p))
		std::cout << "\nEl punto esta dentro del triangulo.\n";
	else
		std::cout << "\nEl punto no esta dentro del triangulo.\n";
}