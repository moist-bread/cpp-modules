/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/27 12:59:32 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#define BLU "\e[0;34m"
#define DEF "\e[0m"

std::string sed_string(std::string line, std::string s1, std::string s2);

int main(int argc, char **argv)
{
	std::cout << std::endl;
	std::cout << BLU ">>┈┈┈>   SED IS FOR LOSERS 👁‍🗨";
	std::cout << DEF << std::endl << std::endl;
	
	if (argc != 4)
	{
		std::cerr << "incorrect usage" << std::endl;
		std::cerr << "usage: ./sed_is_for_losers [filename] [str1] [str2]" << std::endl;
		return (2);
	}
	
	std::fstream fs;
	
	// opening inputed file
  	fs.open (argv[1], std::fstream::in);
	if (!fs.is_open())
	{
		std::cerr << "inputed file \"" << argv[1];
		std::cerr << "\" wasn't able to be opened" << std::endl;
		return (1);
	}
	
	std::string line;
	
	// checking if the file is readable
	if (!std::getline(fs, line) && !fs.eof())
	{
		std::cerr << "error in reading file" << std::endl;
		return (fs.close(), 1);
	}

	std::ofstream output;
	std::string in_file(argv[1]);
	
	// creating the ".replace" outfile
	output.open(in_file.append(".replace").c_str());
    if (!output.is_open())
    {
		std::cerr << "error in opening output file" << std::endl;
		return (fs.close(), 1);
	}

	std::string s1(argv[2]);
	std::string s2(argv[3]);

	// reading and adding to outfile
	output << sed_string(line, s1, s2) << std::endl;
	while (fs.good())
	{
		if (!std::getline(fs, line))
			break;
		output << sed_string(line, s1, s2) << std::endl;
	}	
	fs.close();
	output.close();
	if (!fs.eof())
        return (std::cerr << "error in reading file" << std::endl, 1);
	
	std::cout << "all ocorences of " BLU "\"" << argv[2] << "\"" DEF;
	std::cout << " in the file " BLU "\"" << argv[1] << "\"" DEF;
	std::cout << " have been eradicated and replaced by: " BLU "\"" << argv[3] << "\"";
	std::cout << DEF << std::endl << std::endl;
	std::cout << "you can delight yourself with the result in a " BLU "\"" << argv[1];
	std::cout << ".replace\"" DEF " file near you" << std::endl;
	return (0);
}

std::string sed_string(std::string line, std::string s1, std::string s2)
{
	size_t found = 0;
	
	if (line.length() < s1.length() || !s1.length())
		return (line);
	
	while (line.at(found))
	{
		found = line.find(s1, found);
		if (found == std::string::npos)
			break;
		else
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			if (s2 == "" && found > 0)
				found--;
		}
	}
	return (line);
}
