/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/14 11:37:14 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 17:33:16 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"

Character::Character(void) : _name("nameless")
{
	std::cout << GRN "a Character called [ ";
	std::cout << getName() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Character::Character(std::string const name) : _name(name)
{
	std::cout << GRN "a Character called [ ";
	std::cout << getName() << " ] ";
	std::cout << UCYN "has appeared";
	std::cout << DEF << std::endl;
}

Character::Character(Character const &source)
{
	*this = source;
	std::cout << GRN "a Character called [ ";
	std::cout << getName() << " ] ";
	std::cout << UYEL "has been copy cloned";
	std::cout << DEF << std::endl;
}

Character::~Character(void)
{
	std::cout << GRN "a Character called [ ";
	std::cout << getName() << " ] ";
	std::cout << URED "has ran away";
	std::cout << DEF << std::endl;
}

Character &Character::operator=(Character const &source)
{
	std::cout << YEL "copy assignment operator overload has been called";
	std::cout << DEF << std::endl;
	if (this != &source)
	{
		_name = source.getName();
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	(void)m;
}

void Character::unequip(int idx)
{
	(void)idx;
}

void Character::use(int idx, ICharacter &target)
{
	_inventory[idx]->use(target);
}
