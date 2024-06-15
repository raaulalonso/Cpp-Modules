/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 01:28:40 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/15 16:24:27 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		int count;
		int num_contacts;

	public:
		void setCount(int _count);
		void setNum_contacts(int _num_contacts);
		void addContact(void);
		void searchContact(void);
};

# endif