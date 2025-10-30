/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/10/30 16:46:50 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

int const Fixed::_fractional_bits = 8;

Fixed::Fixed(void)
{
	setRawBits(0);
	return;
}

Fixed::Fixed(const int value)
{
	setRawBits(value << _fractional_bits);
	return;
}

Fixed::Fixed(const float value)
{
	setRawBits(roundf(value * float(1 << _fractional_bits)));
	return;
}

Fixed::Fixed(Fixed const &source)
{
	setRawBits(0);
	*this = source;
	return;
}

Fixed::~Fixed(void)
{
	return;
}

Fixed &Fixed::operator=(Fixed const &source)
{
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

// !! others

Fixed Fixed::abs(void) const
{
	if (*this < 0)
		return (Fixed(toFloat() * -1));
	else
		return (*this);
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
