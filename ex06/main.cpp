/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:53:46 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/01 18:59:03 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

int	main(int ac, char **av) {
	if (ac != 2) {
		std::cerr << "Error: program usage -> ./Harl 'ARGS'" << std::endl;
		return (1);
	}
	Harl	harl;
	std::string	level(*(av + 1));

	harl.complain(level);
	return (1);
}
