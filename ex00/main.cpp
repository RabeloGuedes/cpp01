/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:15:06 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/07 17:34:02 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void) {
	Zombie	*zombie = newZombie("Foo");
	Zombie	*zombie2 = newZombie("Bar");
	Zombie	zombie3 = Zombie("Heliot");

	if (!zombie || !zombie2 || !zombie3) {
		std::cout << "Memory allocation failed" << endl;
		delete zombie;
		delete zombie2;
		return (1);
	}
	zombie->announce();
	randomChump("Kakarot");
	zombie2->announce();
	zombie3.announce();
	delete zombie;
	delete zombie2;
	return (0);
}
