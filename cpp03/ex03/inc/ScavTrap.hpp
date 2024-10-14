/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:06:29 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:39:59 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_H
# define SCAVTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	private:
		ScavTrap(void);

	public:
		ScavTrap(std::string _name);
		~ScavTrap(void);

		void attack(const std::string& target);
		void guardGate(void);
};

#endif