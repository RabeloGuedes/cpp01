/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:03 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/11 19:00:24 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Invalid number of arguments: usage -> './program' ";
		std::cerr << "'fileName' 'firstString' 'secondString'" << std::endl;
		return (1);
	}
	av++;
	std::string			fileName(*av++);
	std::string			fileNameReplace(fileName.c_str());
	std::string 		firstString(*av++);
	std::string 		secondString(*av);
	std::ifstream		oldFile(fileName.c_str());
	std::stringstream	str;

	if (!oldFile.is_open()) {
		std::cerr << "Failed trying to open: " << fileName << std::endl;
		return (1);
	}
	fileNameReplace.append(".replace");
	std::ofstream	newFile(fileNameReplace.c_str());
	if (!newFile.is_open()) {
		std::cerr << "Failed trying to open: " << fileNameReplace << std::endl;
		oldFile.close();
		return (1);
	}
	str << oldFile.rdbuf();
	std::string s;
	s = str.str();
	if (!firstString.empty()) {
		size_t pos = s.find(firstString, 0); 
		while (pos != std::string::npos) {
			s.erase(pos, firstString.length());
			s.insert(pos, secondString);
			pos = s.find(firstString, pos + secondString.length());
		}
	}
	newFile << s << std::endl;
	oldFile.close();
	newFile.close();
	return (0);
}
