/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:17:03 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Fixed.hpp"

//-‵,┊ color defines

#define GRN "\e[0;32m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define UCYN "\e[4;36m"

#define DEF "\e[0m"

// -->┊( POINT )┊.´-★☆★

class Point
{
public:
	Point(void);						 // default constructor
	Point(const float x, const float y); // float constructor
	Point(Point const &source);			 // copy constructor
	~Point(void);						 // destructor

	Point &operator=(Point const &source); // copy assignment operator overload

	const Fixed getXFixed(void) const;
	const Fixed getYFixed(void) const;

private:
	Fixed const _x;
	Fixed const _y;
};

std::ostream &operator<<(std::ostream &out, Point const &source);
