/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 02:48:53 by raalonso          #+#    #+#             */
/*   Updated: 2024/10/14 19:39:54 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_H
# define FRAGTRAP_H
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	private:
		FragTrap(void);

	public:
		FragTrap(std::string _name);
		~FragTrap(void);

		void attack(const std::string& target);
		void highFivesGuys(void);
};

#endif