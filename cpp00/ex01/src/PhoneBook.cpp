/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 02:53:58 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/15 16:30:08 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

using std::cout;
using std::cin;
using std::string;

void PhoneBook::addContact(void)
{
	Contact new_contact;
	string aux;
	
	if (count == 8)
		count = 0;
	do
	{
		cout << "First name: ";
		getline(cin, aux);
		new_contact.setFirstName(aux);
	} while (new_contact.getFirstName().length() == 0);

	do
	{
		cout << "Last name: ";
		getline(cin, aux);
		new_contact.setLastName(aux);
	} while (new_contact.getLastName().length() == 0);
	
	do
	{
		cout << "Nickname: ";
		getline(cin, aux);
		new_contact.setNickname(aux);
	} while (new_contact.getNickname().length() == 0);

	do
	{
		cout << "Phone number: ";
		getline(cin, aux);
		new_contact.setPhoneNumber(aux);
	} while (new_contact.getPhoneNumber().length() == 0);

	do
	{
		cout << "Darkest secret: ";
		getline(cin, aux);
		new_contact.setDarkestSecret(aux);
	} while (new_contact.getDarkestSecret().length() == 0);
	
	this->contacts[count] = new_contact;
	this->count++;
	if (num_contacts != 8)
		this->num_contacts++;
	cout << "Contact added!\n";
	
}

void format(string str)
{
	if (str.length() > 10)
		cout << str.substr(0, 9) << ".";
	else
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			cout << " ";
		cout << str;
	}
}

void PhoneBook::searchContact(void)
{
	string aux;
	int index;

	cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < this->num_contacts; i++)
	{
		cout << "|         " << i + 1 << "|";
		format(this->contacts[i].getFirstName());
		cout << "|";
		format(this->contacts[i].getLastName());
		cout << "|";
		format(this->contacts[i].getNickname());
		cout << "|\n";
	}
	cout << "\nIndex of the entry to display >>> ";
	getline(cin, aux);
	if (aux.length() == 1 && aux[0] > '0' && aux[0] < '9')
	{
		index = (aux[0] - 48 - 1);
		if (index < this->num_contacts)
		{
			cout << "\nFirst name: " << contacts[index].getFirstName();
			cout << "\nLast name: " << contacts[index].getLastName();
			cout << "\nNickname: " << contacts[index].getNickname();
			cout << "\nPhone number: " << contacts[index].getPhoneNumber();
			cout << "\nDarkest secret: " << contacts[index].getDarkestSecret() << "\n";
		}
		else
			cout << "\nInvalid index :(\n";	
	}
	else
		cout << "\nInvalid index :(\n";
}

void PhoneBook::setCount(int _count)
{
	this->count = _count;
}

void PhoneBook::setNum_contacts(int _num_contacts)
{
	this->num_contacts = _num_contacts;
}
