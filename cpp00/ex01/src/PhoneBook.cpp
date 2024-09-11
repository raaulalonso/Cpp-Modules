/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 02:53:58 by raalonso          #+#    #+#             */
/*   Updated: 2024/08/23 12:38:32 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

bool emptycheck(std::string str)
{
	size_t count = 0;

	for (size_t i = 0; i < str.length(); i++)
	{
		if (isspace(str[i]))
			count++;
	}
	if (count == str.length())
	{
		std::cout << "Empty fields are not allowed!\n";
		return (true);
	}
	return (false);
}

void PhoneBook::addContact(void)
{
	Contact new_contact;
	std::string aux;
	
	if (count == 8)
		count = 0;
	do
	{
		std::cout << "First name: ";
		getline(std::cin, aux);
		new_contact.setFirstName(aux);
	} while (new_contact.getFirstName().length() == 0 || emptycheck(new_contact.getFirstName()));

	do
	{
		std::cout << "Last name: ";
		getline(std::cin, aux);
		new_contact.setLastName(aux);
	} while (new_contact.getLastName().length() == 0 || emptycheck(new_contact.getLastName()));
	
	do
	{
		std::cout << "Nickname: ";
		getline(std::cin, aux);
		new_contact.setNickname(aux);
	} while (new_contact.getNickname().length() == 0|| emptycheck(new_contact.getNickname()));

	do
	{
		std::cout << "Phone number: ";
		getline(std::cin, aux);
		new_contact.setPhoneNumber(aux);
	} while (new_contact.getPhoneNumber().length() == 0|| emptycheck(new_contact.getPhoneNumber()));

	do
	{
		std::cout << "Darkest secret: ";
		getline(std::cin, aux);
		new_contact.setDarkestSecret(aux);
	} while (new_contact.getDarkestSecret().length() == 0 || emptycheck(new_contact.getDarkestSecret()));
	
	this->contacts[count] = new_contact;
	this->count++;
	if (num_contacts != 8)
		this->num_contacts++;
	std::cout << "Contact added!\n";
	
}

void format(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
	{
		for (size_t i = 0; i < 10 - str.length(); i++)
			std::cout << " ";
		std::cout << str;
	}
}

void PhoneBook::searchContact(void)
{
	std::string aux;
	int index;

	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|\n";
	for (int i = 0; i < this->num_contacts; i++)
	{
		std::cout << "|         " << i + 1 << "|";
		format(this->contacts[i].getFirstName());
		std::cout << "|";
		format(this->contacts[i].getLastName());
		std::cout << "|";
		format(this->contacts[i].getNickname());
		std::cout << "|\n";
	}
	std::cout << "\nIndex of the entry to display >>> ";
	getline(std::cin, aux);
	if (aux.length() == 1 && aux[0] > '0' && aux[0] < '9')
	{
		index = (aux[0] - 48 - 1);
		if (index < this->num_contacts)
		{
			std::cout << "\nFirst name: " << contacts[index].getFirstName();
			std::cout << "\nLast name: " << contacts[index].getLastName();
			std::cout << "\nNickname: " << contacts[index].getNickname();
			std::cout << "\nPhone number: " << contacts[index].getPhoneNumber();
			std::cout << "\nDarkest secret: " << contacts[index].getDarkestSecret() << "\n";
		}
		else
			std::cout << "\nInvalid index :(\n";	
	}
	else
		std::cout << "\nInvalid index :(\n";
}

void PhoneBook::setCount(int _count)
{
	this->count = _count;
}

void PhoneBook::setNum_contacts(int _num_contacts)
{
	this->num_contacts = _num_contacts;
}
