/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:18:56 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/18 17:47:19 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <Weapon.hpp>

class HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;
	public:
		void	attack(void);
		HumanA(std::string name, Weapon &type);
		~HumanA();
};

#endif