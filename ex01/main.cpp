/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:53:45 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/07 19:06:57 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main(void) {
	size_t	zombiesNb = 5;
	Zombie	*zombies = zombieHorde(zombiesNb, "Stain");

	for (size_t i = 0; i < zombiesNb; i++) {
		zombies[i].announce();
	}

	delete [] zombies;
}
