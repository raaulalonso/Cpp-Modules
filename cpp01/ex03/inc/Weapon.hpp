/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:31:39 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:50:39 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
# include <iostream>

class Weapon
{
	private:
		std::string type;

	public:
		const std::string getType(void);
		void setType(std::string _type);

		Weapon(std::string _type);
		Weapon(void);
};

#endif