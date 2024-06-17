/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 00:55:21 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:09:54 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main(void)
{
	int N = 10;
	Zombie *zombie_horde = zombieHorde(N, "zombie horde");
	for (int i = 0; i < N; i++)
		zombie_horde[i].announce();
	delete [] zombie_horde;
	return (0);
}