/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:17:17 by arabelo-          #+#    #+#             */
/*   Updated: 2024/04/08 12:09:57 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void) {
	std::string str("HI THIS IS BRAIN");
	std::string	*strPtr = &str;
	std::string &strRef = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "strPtr address held: " << strPtr << std::endl;
	std::cout << "strRef address held: " << &strRef << std::endl;
	
	std::cout << "str value: " << str << std::endl;
	std::cout << "strPtr value pointed to: " << *strPtr << std::endl;
	std::cout << "strRef value pointed to: " << strRef << std::endl;

	return (0);
}