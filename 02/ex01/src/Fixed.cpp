/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/04 17:15:13 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int const Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	setRawBits(0);
	std::cout << GRN "Fixed of value [ ";
	std::cout << *this << " ] ";
	std::cout << UCYN "has been created";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	setRawBits(value << _fractional_bits);
	std::cout << GRN "Fixed of value [ ";
	std::cout << *this << " ] ";
	std::cout << UBLU "has been created w/ int value";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	// using multiplication like in scientific notation
	// equivalent of value * 2^_fractonal_bits
	// needs to be this way because the bits in a float
	// are split differnetly from an int (exp, mant)
	// using roundf to round up when needed because of the
	// fractional liminations of the fixed point
	// 1/2 1/4 1/8 1/16 1/32 1/64 1/128
	// to try and get the number slighty more accuratly
	setRawBits(roundf(value * float(1 << _fractional_bits)));
	std::cout << GRN "Fixed of value [ ";
	std::cout << *this << " ] ";
	std::cout << UMAG "has been created w/ float value";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(Fixed const &source)
{
	setRawBits(0);
	*this = source;
	std::cout << GRN "Fixed of value [ ";
	std::cout << *this << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << GRN "Fixed of value [ ";
	std::cout << *this << " ] ";
	std::cout << URED "has been erased";
	std::cout << DEF << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const &source)
{
	std::cout << MAG "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	setRawBits(source.getRawBits());
	return (*this);
}

int Fixed::toInt( void ) const
{
	return (getRawBits() >> _fractional_bits);
}

float Fixed::toFloat( void ) const
{
	// dividing instead of multiplying to reverse
	return (float(getRawBits()) / float(1 << _fractional_bits));
}

int Fixed::getRawBits( void ) const
{
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
	return ;
}

std::ostream &operator<<(std::ostream &out, Fixed const &source)
{
	out << source.toFloat();
	return (out);
}
