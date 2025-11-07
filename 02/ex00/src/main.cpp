/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 13:46:28 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   MY FIRST CLASS IN ORTHODOX CANONICAL FORM";
	std::cout << std::endl << std::endl;
	std::cout << BLU "canonical form demonstration:";
	std::cout << DEF << std::endl << std::endl << std::endl;
	
	Fixed a;
	std::cout << std::endl;
	
	Fixed b( a );
	std::cout << std::endl;
	
	Fixed c;
	std::cout << std::endl;

	c = b;
	std::cout << std::endl;
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	std::cout << std::endl;

	return (0);
}
