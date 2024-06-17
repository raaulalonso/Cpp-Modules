/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:31:21 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:59:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Weapon.hpp"

const std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string _type)
{
	this->type = _type;
}

Weapon::Weapon(std::string _type)
{
	this->type = _type;
}

Weapon::Weapon() {}
