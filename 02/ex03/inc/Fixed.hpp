/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:17:43 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>
#include <cmath>

// -->┊( FIXED )┊.´-★☆★

class Fixed
{
public:
	Fixed(void);				// default constructor
	Fixed(const int value);		// int constructor
	Fixed(const float value);	// float constructor
	Fixed(Fixed const &source); // copy constructor
	~Fixed(void);				// destructor

	Fixed &operator=(Fixed const &source); // copy assignment operator overload
	
	// comparison operators
	
	bool operator>(Fixed const &source) const;
	bool operator<(Fixed const &source) const;
	bool operator>=(Fixed const &source) const;
	bool operator<=(Fixed const &source) const;
	bool operator==(Fixed const &source) const;
	bool operator!=(Fixed const &source) const;
	
	// arithmatic operators
	
	Fixed operator+(Fixed const &source) const;
	Fixed operator-(Fixed const &source) const;
	Fixed operator*(Fixed const &source) const;
	Fixed operator/(Fixed const &source) const;

	// increment/decrement operators
	
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	
	// public min and max
	
	static Fixed &min(Fixed &left, Fixed &right);
	static const Fixed &min(Fixed const &left, Fixed const &right);
	static Fixed &max(Fixed &left, Fixed &right);
	static const Fixed &max(Fixed const &left, Fixed const &right);

	Fixed abs(void) const;
	int toInt(void) const;
	float toFloat(void) const;

	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int _value;
	static int const _fractional_bits;
};

std::ostream &operator<<(std::ostream &out, Fixed const &source);
