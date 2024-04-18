/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:18:32 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/08 14:05:51 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name): _name(name) {
	
}

HumanB::~HumanB() {
}

void	HumanB::attack(void) {
	std::cout << _name << " " << "attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &type) {
	_weapon = &type;
}
