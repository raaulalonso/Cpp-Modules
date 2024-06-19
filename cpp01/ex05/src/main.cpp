/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 03:06:03 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/20 01:23:16 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Harl.hpp"

int main(void)
{
	Harl h;
	
	h.complain("INFO");
	h.complain("WARNING");
	h.complain("ERROR");
	h.complain("ERROR");
	h.complain("DEBUG");
}