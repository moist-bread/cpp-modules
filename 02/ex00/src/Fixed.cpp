/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/23 17:41:40 by rduro-pe         ###   ########.fr       */
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
	this->_value = source.getRawBits();
	return *this;
}


int Fixed::getRawBits( void ) const
{
	std::cout << CYN "getter has been called";
	std::cout << DEF << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw )
{
	_value = raw;
	return ;
}
