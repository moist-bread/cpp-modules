/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/30 17:09:36 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

// -->┊( POINT )┊.´-★☆★

class Point
{
public:
	Point(void); // default constructor
	Point(const float x, const float y); // float constructor
	Point(Point const &source); // copy constructor
	~Point(void); // destructor

	Point &operator=(Point const &source); // copy assignment operator overload

	const Fixed getXFixed(void) const;
	const Fixed getYFixed(void) const;

private:
	Fixed const _x;
	Fixed const _y;
};

std::ostream &operator<<(std::ostream &out, Point const &source);
