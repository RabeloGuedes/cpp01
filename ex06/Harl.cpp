/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:33:51 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/18 09:00:49 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Harl.hpp>

Harl::Harl(void) {

}

Harl::~Harl(void) {
	
}

void	Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put ";
	std::cout << "enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for";
	std::cout << " years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) {
	tHarl	res = getEHarl(level);

	switch (res)
	{
	case E_DEBUG:
		debug();
		break ;
	case E_INFO:
		info();
		break ;
	case E_WARNING:
		warning();
		break ;
	case E_ERROR:
		error();
		break ;
	default:
		std::cout << "Invalid complain: range goes from 0 to 3" << std::endl;
		break ;
	}
}
