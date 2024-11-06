/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:27:24 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 22:03:59 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H
# include <iostream>
# include "ICharacter.hpp"

class Character: public ICharacter
{
	private:
		AMateria *inventory[4];
		const std::string name;

	public:
		Character(std::string _name);
		Character(void);
		Character(const Character &c);
		~Character(void);
		
		Character &operator=(const Character &other);
		
		void equip(AMateria* m);
		std::string const &getName() const;
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		// Para evitar leaks de los materiales desequipados de characters copiados.
		AMateria *getMateriaFromInventory(int idx);
};

#endif