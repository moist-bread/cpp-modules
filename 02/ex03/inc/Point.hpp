/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/27 15:11:23 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "Fixed.hpp"
#include <iostream>
#include <cmath>

//-‵,┊ color defines

#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define HRED "\e[0;91m"
#define HMAG "\e[0;95m"
#define BBLU "\e[1;34m"

#define URED "\e[4;31m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"

#define DEF "\e[0m"

// -->┊( POINT )┊.´-★☆★

class Point
{
public:
	Point(void); // default constructor
	Point(const float x, const float y); // float constructor
	Point(Point const &source); // copy constructor
	~Point(void); // destructor

	Point &operator=(Point const &source); // copy assignment operator overload

	Fixed getXFixed(void) const;
	Fixed getYFixed(void) const;

private:
	Fixed const _x;
	Fixed const _y;
};

std::ostream &operator<<(std::ostream &out, Point const &source);
