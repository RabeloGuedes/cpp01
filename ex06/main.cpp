/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:53:46 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/19 10:06:08 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

tHarl	getEHarl(std::string level) {
	if (level == "DEBUG")
		return (E_DEBUG);
	if (level == "INFO")
		return (E_INFO);
	if (level == "WARNING")
		return (E_WARNING);
	if (level == "ERROR")
		return (E_ERROR);
	return (E_EXCEPTION);
}

void	displayMessages(Harl harl, std::string level) {
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	size_t		lvl = 0;

	while (lvl < levels->length() && levels[lvl] != level) {
		lvl++;
	}
	if (lvl >= levels->length()) {
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return ;
	}
	while (lvl <= 3) {
		std::cout << "[ " << levels[lvl] << " ]" << std::endl;
		harl.complain(levels[lvl]);
		std::cout << std::endl;
		lvl++;
	}
}

int	main(int ac, char **av) {
	if (ac != 2)
		return (1);
	Harl	harl;

	displayMessages(harl, *(av + 1));
	return (1);
}
