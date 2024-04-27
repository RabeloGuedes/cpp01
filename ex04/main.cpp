/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:03 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/22 08:50:21 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replaceString(std::string &str, std::string toBeReplaced, std::string newString) {
	for (size_t pos = 0; pos < str.length(); pos++) {
		if (!str.find(toBeReplaced, pos)) {
			str.erase(pos, toBeReplaced.length() - 1);
			str.insert(pos, newString);
			pos += toBeReplaced.length();
		}
	}
}

int	main(int ac, char **av) {
	if (ac != 4) {
		std::cerr << "Invalid number of arguments: usage -> './program' ";
		std::cerr << "'fileName' 'firstString' 'secondString'" << std::endl;
		return (1);
	}
	av++;
	std::string		fileName(*av++);
	std::string		fileNameReplace(fileName);
	std::string 	firstString(*av++);
	std::string 	secondString(*av);
	std::ifstream	oldFile(fileName);
	std::string		test;

	if (!oldFile.is_open()) {
		std::cerr << "Failed trying to open: " << fileName << std::endl;
		return (1);
	}
	fileNameReplace.append(".replace");
	std::ofstream	newFile(fileNameReplace);
	if (!newFile.is_open()) {
		std::cerr << "Failed trying to open: " << fileNameReplace << std::endl;
		oldFile.close();
		return (1);
	}
	while (std::getline(oldFile, test)) {
		replaceString(test, firstString, secondString);
		newFile << test << std::endl;
	}
	oldFile.close();
	newFile.close();
	return (0);
}
