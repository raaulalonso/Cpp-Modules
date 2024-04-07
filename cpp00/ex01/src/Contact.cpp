/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 02:54:12 by raalonso          #+#    #+#             */
/*   Updated: 2024/04/07 19:23:23 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Contact.hpp"

void Contact::setFirstName(std::string _first_name)
{
	this->first_name = _first_name;
}

void Contact::setLastName(std::string _last_name)
{
	this->last_name = _last_name;
}

void Contact::setNickname(std::string _nickname)
{
	this->nickname = _nickname;
}

void Contact::setPhoneNumber(std::string _phone_number)
{
	this->phone_number = _phone_number;
}

void Contact::setDarkestSecret(std::string _darkest_secret)
{
	this->darkest_secret = _darkest_secret;
}

std::string Contact::getFirstName(void)
{
	return (this->first_name);
}

std::string Contact::getLastName(void)
{
	return (this->last_name);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phone_number);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkest_secret);
}
