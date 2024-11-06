/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:59:09 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 21:05:42 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
# include <iostream>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
		AMateria *memory[4];
	
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &m);
		~MateriaSource(void);

		MateriaSource &operator=(const MateriaSource &other);

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);

};

#endif