/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:30:46 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/16 01:47:30 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H;
# define ZOMBIE_H;
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		void announce( void );
		
		Zombie(std::string _name);
		~Zombie(void);
};

#endif