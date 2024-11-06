/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 08:27:24 by raalonso          #+#    #+#             */
/*   Updated: 2024/11/04 20:03:53 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H
# include <iostream>
# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure: public AMateria
{
	public:
		Cure(void);
		Cure(const Cure &c);
		~Cure(void);
		
		Cure &operator=(const Cure &other);
		Cure *clone() const;
		void use(ICharacter &target);
};

#endif