/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:05:54 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/16 19:33:21 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

void leaks(void) {
	system("leaks animal");
}

int main()
{
	//atexit(leaks);
	Animal* animales[100];
	for (int i = 0; i < 100; i++) {
		if (i < 50) {
			animales[i] = new Dog();
		}
		else {
			animales[i] = new Cat();
		}
	}

	for (int i = 0; i < 100; i++) {
		delete animales[i];
	}
	return 0;
}