/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:27:01 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/15 16:24:44 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

using std::cout;
using std::cin;
using std::string;

void printMenu(void)
{
	cout << "----------------------------------------\n";
	cout << "|                                      |\n";
	cout << "|        PHONEBOOK by raalonso         |\n";
	cout << "|                                      |\n";
	cout << "|          Enter one command:          |\n";
	cout << "|                                      |\n";
	cout << "|        ADD: save a new contact.      |\n";
	cout << "|   SEARCH: display specific contact.  |\n";
	cout << "|        EXIT: exits the program.      |\n";
	cout << "|                                      |\n";
	cout << "----------------------------------------\n";
}

// error SEARCH cuando hay caracteres raros
// deja meter campos solo espacios
int main(void)
{
	string cmd;
	PhoneBook pb;

	pb.setCount(0);
	pb.setNum_contacts(0);
	printMenu();
	do
	{
		cout << ">>> ";
		getline(cin, cmd);
		if (cmd.compare("ADD") == 0)
			pb.addContact();
		else if (cmd.compare("SEARCH") == 0)
		{
			pb.searchContact();
		}
		else if (cmd.compare("EXIT") != 0)
			cout << "Invalid command.\n";
	} while (cmd.compare("EXIT") != 0);
}