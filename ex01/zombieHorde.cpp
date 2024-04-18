/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 17:56:21 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/07 18:53:37 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie	*zombieHorde(int N, std::string name) {
	if (N <= 0)
		return (NULL);
	Zombie	*zombies = new Zombie[N];
	for (int i = 0; i < N; i++) {
		zombies[i].setName(name);
	}
	return (zombies);
}
