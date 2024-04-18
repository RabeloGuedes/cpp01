/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:03 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/09 16:42:12 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	findStr(std::string big, std::string little) {
	for (size_t i = 0; i < big.length(); i++) {
		for (size_t j = 0; j < big.length() && j < little.length() && big[i + j] == little[j]; j++) {
			if (!little[j + 1])
				return ((int)i);
		}
	}
	return (-1);
}

void	replaceString(std::string &str, std::string toBeReplaced, std::string newString) {
	for (size_t i = 0; i < str.length(); i++) {
		int	res = findStr(str, toBeReplaced);
		if (res != -1) {
			str.erase(res, toBeReplaced.length());
			str.insert(res, newString);
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