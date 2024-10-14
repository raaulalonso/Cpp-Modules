/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:40:02 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:15:16 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"

int main(void)
{
	ClapTrap c("Raul");
	ClapTrap a("Pedro");
	c.attack("Pedro");
	a.takeDamage(10);
	a.beRepaired(1);
	a.attack("Raul");
	c.takeDamage(3);
	c.beRepaired(2);
}