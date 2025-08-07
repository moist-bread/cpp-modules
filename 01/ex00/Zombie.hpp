/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/30 12:25:02 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

//-‵,┊ needed libs by class
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>

// -->┊( ZOMBIE )┊.´-★☆★

class Zombie
{
public:
	Zombie(void);  // constructor
	~Zombie(void); // destructor

	void announce( void );

private:
	std::string name;
	/* Contact contact_list[8];

	void _displayFullWarn(void) const;
	bool _recieveInput(Contact *contact, int flag, std::string m);
	bool _validateInput(std::string input, int flag) const;
	void _displayInvalidInput(int flag) const;
	void _displayBookTop(void) const;
	void _displayBookBottom(int n) const;
	int _inputContactIndex(void) const; */
};

#endif