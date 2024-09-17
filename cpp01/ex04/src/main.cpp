/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 01:06:40 by raalonso          #+#    #+#             */
/*   Updated: 2024/09/17 19:06:52 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


int main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;
	std::string content;
	char c;

	if (argc != 4)
	{
		std::cout << "Invalid arguments. You must introduce: [filename] [old word] [new word]";
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "File: " << argv[1] << " do not exists.";
		return (1);
	}
	while (infile >> std::noskipws >> c) // std::noskipws to not skip white spaces while reading.
		content += c; //CHANGE NO CHARACTER BY CHARACTER IS NOT C ANYMORE
	outfile.open((argv[1] + (std::string)".replace").c_str());
	
	int pos = 0;
	for (int i = 0; i < (int)content.size(); i++)
	{
		pos = content.find(argv[2], i);
		if (pos != (int)std::string::npos && pos == i) // npos is returned when argv[2] is not found
		{
			outfile << argv[3];
			i += std::string(argv[2]).size();
		}
		outfile << content[i];
	}
}