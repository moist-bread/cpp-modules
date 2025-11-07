/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 13:01:53 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:36:18 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"
#include "../inc/Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	std::cout << std::endl;
	std::cout << CYN ">>┈┈┈>   BSP 🍕🎯";
	std::cout << DEF << std::endl << std::endl;

	Point a(0, 0);
	Point b(10, 20);
	Point c(20, 0);
	Point d(-4.75f, -8);
	Point p(10, 8.5);
	
	std::cout << std::endl << std::endl;
	std::cout << "TRIANGLE:	V1: " << a << "  V2: " << b << "  V3: " << c << std::endl;
	std::cout << "POINT:		" << p << std::endl;
	if (bsp(a, b, c, p))
		std::cout << GRN "the point is INSIDE of the triangle" DEF<< std::endl;
	else
		std::cout << MAG "the point is OUTSIDE of the triangle" DEF<< std::endl;
	
	
	std::cout << std::endl << std::endl;
	std::cout << "TRIANGLE:	V1: " << a << "  V2: " << p << "  V3: " << c << std::endl;
	std::cout << "POINT:		" << b << std::endl;
	if (bsp(a, p, c, b))
		std::cout << GRN "the point is INSIDE of the triangle" DEF<< std::endl;
	else
		std::cout << MAG "the point is OUTSIDE of the triangle" DEF<< std::endl;
	
	std::cout << std::endl << std::endl;
	std::cout << "TRIANGLE:	V1: " << d << "  V2: " << b << "  V3: " << c << std::endl;
	std::cout << "POINT:		" << a << std::endl;
	if (bsp(d, b, c, a))
		std::cout << GRN "the point is INSIDE of the triangle" DEF<< std::endl;
	else
		std::cout << MAG "the point is OUTSIDE of the triangle" DEF<< std::endl;
	
	std::cout << std::endl << std::endl;
	std::cout << "TRIANGLE:	V1: " << a << "  V2: " << b << "  V3: " << c << std::endl;
	std::cout << "POINT:		" << c << std::endl;
	if (bsp(a, b, c, c))
		std::cout << GRN "the point is INSIDE of the triangle" DEF<< std::endl;
	else
		std::cout << MAG "the point is OUTSIDE of the triangle" DEF<< std::endl;
	
	return (0);
}
