/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:27:01 by raalonso          #+#    #+#             */
/*   Updated: 2024/04/07 02:47:49 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/PhoneBook.hpp"

int main(void)
{
	std::string cmd;

	do
	{
		getline(std::cin, cmd);
		std::cin.clear();
	} while (cmd.compare("EXIT") != 0);
}