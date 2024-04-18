/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 23:29:22 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/18 00:55:03 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

typedef	enum eHarl {
	E_DEBUG,
	E_INFO,
	E_WARNING,
	E_ERROR,
	E_EXCEPTION,
}	tHarl;

class Harl {
	public:
		Harl();
		~Harl();
		void	complain(std::string level);
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

tHarl	getEHarl(std::string level);

#endif
