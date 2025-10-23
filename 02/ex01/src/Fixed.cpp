/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/23 17:43:57 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int const Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	setRawBits(0);
	std::cout << GRN "Fixed of value [ ";
	std::cout << _value << " ] ";
	std::cout << UCYN "has been created";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(const int value)
{
	// !! CONVERT TO FIXED-P VAL
	setRawBits(value);
	std::cout << GRN "Fixed of value [ ";
	std::cout << _value << " ] ";
	std::cout << UBLU "has been created w/ int value";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(const float value)
{
	// !! CONVERT TO FIXED-P VAL
	setRawBits(value);
	std::cout << GRN "Fixed of value [ ";
	std::cout << _value << " ] ";
	std::cout << UMAG "has been created w/ float value";
	std::cout << DEF << std::endl;
	return;
}

Fixed::Fixed(Fixed const &source)
{
	setRawBits(0);
	*this = source;
	std::cout << GRN "Fixed of value [ ";
	std::cout << _value << " ] ";
	std::cout << UYEL "has been copy created";
	std::cout << DEF << std::endl;
	return;
}

Fixed::~Fixed(void)
{
	std::cout << GRN "Fixed of value [ ";
	std::cout << _value << " ] ";
	std::cout << URED "has been erased";
	std::cout << DEF << std::endl;
	return;
}

Fixed &Fixed::operator=(Fixed const &source)
{
	std::cout << MAG "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	setRawBits(source.getRawBits());
	return *this;
}

int Fixed::toInt( void ) const
{
	// !! CONVERT FIXED-P TO INT VAL
	return (1);
}

float Fixed::toFloat( void ) const
{
	// !! CONVERT FIXED-P TO FLOAT-P VAL
	return (1.0);
}

int Fixed::getRawBits( void ) const
{
	// std::cout << CYN "getter has been called";
	// std::cout << DEF << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
	return ;
}

std::ostream &operator<<(std::ostream &out, Fixed const &source)
{
	out << source.getRawBits();
	return (out);
}
