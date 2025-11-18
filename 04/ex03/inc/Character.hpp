/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 17:32:46 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "ICharacter.hpp"

// -->┊( CHARACTER )┊.´-★☆★

class Character: public ICharacter
{
public:
	Character(std::string const name);	// name constructor
	Character(Character const &source);	// copy constructor
	~Character(void);					// destructor

	Character &operator=(Character const &source); // copy assignment operator overload
	
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	
private:
	Character(void);					// default constructor
	std::string _name;
	AMateria *_inventory[4];
};
