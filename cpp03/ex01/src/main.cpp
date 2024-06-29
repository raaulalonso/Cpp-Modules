/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 17:40:02 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/29 02:32:39 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

int main(void)
{
	ClapTrap c("Raul");
	ScavTrap s("Pedro");
	c.attack("Pedro");
	s.takeDamage(0);
	s.attack("Raul");
	c.takeDamage(20);
}