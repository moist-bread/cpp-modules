/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 14:08:15 by rduro-pe         ###   ########.fr       */
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
	if (this != &source)
		setRawBits(source.getRawBits());
	return (*this);
}

// !! comparison operators

bool Fixed::operator>(Fixed const &source) const
{
	return ((getRawBits() > source.getRawBits()));
}

bool Fixed::operator<(Fixed const &source) const
{
	return ((getRawBits() < source.getRawBits()));
}

bool Fixed::operator>=(Fixed const &source) const
{
	return ((getRawBits() >= source.getRawBits()));
}

bool Fixed::operator<=(Fixed const &source) const
{
	return ((getRawBits() <= source.getRawBits()));
}

bool Fixed::operator==(Fixed const &source) const
{
	return ((getRawBits() == source.getRawBits()));
}

bool Fixed::operator!=(Fixed const &source) const
{
	return ((getRawBits() != source.getRawBits()));
}

// !! arithmatic operators

Fixed Fixed::operator+(Fixed const &source) const
{
	return (Fixed(toFloat() + source.toFloat()));
}

Fixed Fixed::operator-(Fixed const &source) const
{
	return (Fixed(toFloat() - source.toFloat()));
}

Fixed Fixed::operator*(Fixed const &source) const
{
	return (Fixed(toFloat() * source.toFloat()));
}

Fixed Fixed::operator/(Fixed const &source) const
{
	return (Fixed(toFloat() / source.toFloat()));
}

// !! increment/decrement operators

Fixed &Fixed::operator++()
{
	_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	// create a temporary copy of this instance
	// for that moment, and just increase
	// it like in pre-inc
	Fixed temp = *this;
	_value++;
	return (temp);
}

Fixed &Fixed::operator--()
{
	_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	_value--;
	return (temp);
}

// !! public min and max

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	if (left < right)
		return (left);
	else
		return (right);
}

Fixed const &Fixed::min(Fixed const &left, Fixed const &right)
{
	if (left < right)
		return (left);
	else
		return (right);
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

Fixed const &Fixed::max(Fixed const &left, Fixed const &right)
{
	if (left > right)
		return (left);
	else
		return (right);
}

int Fixed::toInt(void) const
{
	return (getRawBits() >> _fractional_bits);
}

float Fixed::toFloat(void) const
{
	return (float(getRawBits()) / float(1 << _fractional_bits));
}

int Fixed::getRawBits(void) const
{
	return (_value);
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
	return;
}

std::ostream &operator<<(std::ostream &out, Fixed const &source)
{
	out << source.toFloat();
	return (out);
}
