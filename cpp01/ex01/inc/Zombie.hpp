/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 01:30:46 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:05:00 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <iostream>

class Zombie
{
	private:
		std::string name;

	public:
		void announce( void );
		void setName(std::string _name);
		
		Zombie(std::string _name);
		Zombie(void);
		~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif