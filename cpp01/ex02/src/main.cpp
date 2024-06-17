/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 01:11:25 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/17 01:29:15 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Memory address of string variable: " << &str;
	std::cout << "\nMemory address held by the pointer: " << stringPTR;
	std::cout << "\nMemory address held by stringREF: " << &stringREF;

	std::cout << "\nValue of the string variable: " << str;
	std::cout << "\nValue pointed to by stringPTR: " << *stringPTR;
	std::cout << "\nValue pointed to by stringREF: " << stringREF << "\n";
}