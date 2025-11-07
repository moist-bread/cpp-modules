/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 18:05:28 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:17:23 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point(void): _x(0), _y(0)
{
	return;
}

Point::Point(const float x, const float y): _x(x), _y(y)
{
	std::cout << GRN "Point of value [ ";
	std::cout << *this << " ] ";
	std::cout << UCYN "has been created" DEF;
	std::cout << std::endl;
	return;
}

Point::Point(Point const &source): _x(source.getXFixed()), _y(source.getYFixed())
{
	return;
}

Point::~Point(void)
{
	return;
}

Point &Point::operator=(Point const &source)
{
	(void)source;
	return (*this);
}

const Fixed Point::getXFixed(void) const
{
	return (_x);
}

const Fixed Point::getYFixed(void) const
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
