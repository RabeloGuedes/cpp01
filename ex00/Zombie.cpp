/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 11:43:02 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/07 18:48:46 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie::Zombie(std::string zombieName): _name(zombieName) {

}

Zombie::~Zombie(void) {
	std::cout << "Bye bye " << _name << std::endl; 
}

void	Zombie::announce(void) {
	std::cout << _name << ": " <<  "BraiiiiiiinnnzzzZ..." << std::endl;
}