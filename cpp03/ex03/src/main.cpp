/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:33:31 by raalonso          #+#    #+#             */
/*   Updated: 2024/07/02 02:51:04 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int main(void)
{
	ClapTrap c("Raul");
	ScavTrap s("Pedro");
	FragTrap f("Marcos");
	DiamondTrap d("frankestein");
	c.attack("Pedro");
	s.takeDamage(0);
	s.attack("Raul");
	c.takeDamage(20);
	s.attack("Marcos");
	f.takeDamage(20);
	f.beRepaired(20);
	f.attack("Pedro");
	s.takeDamage(30);
	d.whoAmI();
}