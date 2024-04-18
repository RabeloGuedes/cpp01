/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:19:58 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/08 14:08:14 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &type): _name(name), _weapon(&type) {
}

HumanA::~HumanA() {
}

void	HumanA::attack(void) {
	std::cout << _name << " " << "attacks with their " << _weapon->getType() << std::endl;
}
