/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:16:48 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/08 13:48:38 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type): _type(type) {
}

Weapon::~Weapon() {
}

const std::string	&Weapon::getType(void) {
	const std::string &type = _type;
	return (type);
}

void	Weapon::setType(std::string newType) {
	_type = newType;
}
