/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:32:01 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 02:06:46 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &weapon;
		std::string name;
	public:
		void attack(void);
		
		HumanA(std::string _name, Weapon &_weapon);
	
};

#endif