/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/13 14:10:52 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << GRN "a WrongCat, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
	return;
}

WrongCat::WrongCat(WrongCat const &source) : WrongAnimal(source)
{
	*this = source;
	std::cout << GRN "a WrongCat, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
	return;
}

WrongCat::~WrongCat(void)
{
	std::cout << GRN "a WrongCat, more commonly identified as [ ";
	std::cout << getType() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
	return;
}

WrongCat &WrongCat::operator=(WrongCat const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
		type = source.getType();
	return (*this);
}

void WrongCat::makeSound(void) const
{
	std::cout << YEL "MEOWWWWWWWWWWWW" DEF << std::endl;
	return;
}
