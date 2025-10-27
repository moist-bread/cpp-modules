/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:05:28 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/27 17:41:55 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	std::cout << GRN "Point of value [ ";
	std::cout << *this << " ] ";
	std::cout << UCYN "has been created";
	std::cout << DEF << std::endl;
	return;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	std::cout << GRN "Point of value [ ";
	std::cout << *this << " ] ";
	std::cout << UMAG "has been created w/ float value";
	std::cout << DEF << std::endl;
	return;
}

Point::Point(Point const &source)
{
	*this = source;
	std::cout << GRN "Point of value [ ";
	std::cout << *this << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

Point::~Point(void)
{
	std::cout << GRN "Point of value [ ";
	std::cout << *this << " ] ";
	std::cout << URED "has been erased";
	std::cout << DEF << std::endl;
	return;
}

Point &Point::operator=(Point const &source)
{
	std::cout << MAG "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	Point copy(source);
	return (copy);
}

Fixed Point::getXFixed(void) const
{
	return (_x);
}

Fixed Point::getYFixed(void) const
{
	return (_y);
}

std::ostream &operator<<(std::ostream &out, Point const &source)
{
	out << "x:";
	out << source.getXFixed();
	out << " y:";
	out << source.getYFixed();
	return (out);
}