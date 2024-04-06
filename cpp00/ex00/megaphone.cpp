/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 23:27:03 by raalonso          #+#    #+#             */
/*   Updated: 2024/04/07 00:06:20 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;
int	main(int argc, char **argv)
{
	if (argc == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
			cout << (char)toupper(argv[i][j]);
	}
	cout << "\n";
	return (0);
}
