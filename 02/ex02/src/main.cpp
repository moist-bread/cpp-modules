/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:10:51 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   NOW WE'RE TALKING 🔫🌱";
	std::cout << DEF << std::endl << std::endl;
	
	std::cout << BBLU "multi, pre-inc, post-inc, max() demo:";
	std::cout << DEF << std::endl << std::endl;
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << std::endl;
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << std::endl;
	
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << std::endl << std::endl;
	
	std::cout << BBLU "div, pre-dec, post-dec, min() demo:";
	std::cout << DEF << std::endl << std::endl;
	
	Fixed c;
	Fixed const d( Fixed( 3.25f ) / Fixed( 2.0f ) );
	std::cout << std::endl;
	
	std::cout << c << std::endl;
	std::cout << --c << std::endl;
	std::cout << c << std::endl;
	std::cout << c-- << std::endl;
	std::cout << c << std::endl;
	std::cout << std::endl;
	
	std::cout << d << std::endl;
	std::cout << Fixed::min( c, d ) << std::endl;
	std::cout << std::endl;

	return (0);
}
