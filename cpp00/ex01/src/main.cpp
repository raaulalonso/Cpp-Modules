/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:27:01 by raalonso          #+#    #+#             */
/*   Updated: 2024/08/23 12:23:28 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

void printMenu(void)
{
	std::cout << "----------------------------------------\n";
	std::cout << "|                                      |\n";
	std::cout << "|        PHONEBOOK by raalonso         |\n";
	std::cout << "|                                      |\n";
	std::cout << "|          Enter one command:          |\n";
	std::cout << "|                                      |\n";
	std::cout << "|        ADD: save a new contact.      |\n";
	std::cout << "|   SEARCH: display specific contact.  |\n";
	std::cout << "|        EXIT: exits the program.      |\n";
	std::cout << "|                                      |\n";
	std::cout << "----------------------------------------\n";
}

int main(void)
{
	std::string cmd;
	PhoneBook pb;

	pb.setCount(0);
	pb.setNum_contacts(0);
	printMenu();
	do
	{
		std::cout << ">>> ";
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
			pb.addContact();
		else if (cmd.compare("SEARCH") == 0)
		{
			pb.searchContact();
		}
		else if (cmd.compare("EXIT") != 0)
			std::cout << "Invalid command.\n";
	} while (cmd.compare("EXIT") != 0);
}