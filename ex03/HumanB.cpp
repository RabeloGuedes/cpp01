/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:18:32 by arabelo-          #+#    #+#             */
/*   Updated: 2024/05/11 18:17:21 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name): _name(name) {
	_weapon = NULL;
}

HumanB::~HumanB() {
}

void	HumanB::attack(void) {
	if (_weapon)
		std::cout << _name << " " << "attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " " << "attacks with no weapon" << std::endl;
}

void	HumanB::setWeapon(Weapon &type) {
	_weapon = &type;
}
