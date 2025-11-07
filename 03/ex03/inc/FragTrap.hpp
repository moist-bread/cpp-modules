/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/07 17:18:18 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "ClapTrap.hpp"

// -->┊( FRAGTRAP )┊.´-★☆★

class FragTrap: virtual public ClapTrap
{
public:
	FragTrap(void);						// default constructor
	FragTrap(std::string name);			// name constructor
	FragTrap(FragTrap const &source);	// copy constructor
	~FragTrap(void);					// destructor

	FragTrap &operator=(FragTrap const &source); // copy assignment operator overload
	
	// actions
	void highFivesGuys(void);
};

std::ostream &operator<<(std::ostream &out, FragTrap const &source);
