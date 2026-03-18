/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ml-hote <ml-hote@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 16:50:22 by ml-hote           #+#    #+#             */
/*   Updated: 2026/03/18 13:49:38 by ml-hote          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

std::string	ft_replace(std::string line, std::string toFind, std::string replace)
{
	size_t	pos = 0;
	size_t	findPos;
	std::string returnVal = "";
	
	while (pos < line.length())
	{
		findPos = line.find(toFind, pos);
		if (findPos != std::string::npos)
		{
			returnVal.append(line.substr(pos, findPos - pos));
			returnVal.append(replace);
			pos = findPos + toFind.length();
		}
		else
		{
			returnVal.append(line.substr(pos));
			break;
		}
	}
	return (returnVal);
}

void	parsing(int ac, char (**av))
{
	
	if (ac != 4)
	{
		std::cout << "Expecting 3 args !" << std::endl;
		exit(1);
	}
	std::ifstream inputFile(av[1]);
	if (!inputFile.good())
	{
		std::cout << "Can't read out of that file !" << std::endl;
		exit(1);
	}
	// Variable to store each line from the file
	std::string	line;
	std::string	outLine;
	std::string outFileName = av[1];
	std::ofstream outputFile((outFileName+".replace").c_str());
	// Read each line from the file and print it
	while (getline(inputFile, line))
	{
		outLine = ft_replace(line, av[2], av[3]);
		outputFile.write((outLine.append("\n")).c_str(), outLine.length());
	}
}
