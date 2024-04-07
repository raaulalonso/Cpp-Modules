/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 02:53:58 by raalonso          #+#    #+#             */
/*   Updated: 2024/04/07 19:38:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

using std::cout;
using std::cin;
using std::string;

void PhoneBook::addContact(void)
{
	string first_name, last_name, nickname, phone_number, darkest_secret;
	
	do
	{
		cout << "First name: ";
		getline(cin, first_name);
	} while (first_name.length() == 0);

	do
	{
		cout << "Last name: ";
		getline(cin, last_name);
	} while (last_name.length() == 0);
	
	do
	{
		cout << "Nickname: ";
		getline(cin, nickname);
	} while (nickname.length() == 0);

	
}

void PhoneBook::searchContact(void)
{
	
}
