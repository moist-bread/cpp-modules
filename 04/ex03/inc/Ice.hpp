/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 15:59:44 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "AMateria.hpp"

// -->┊( ICE )┊.´-★☆★

class Ice: public AMateria
{
public:
	Ice(void);				// default constructor
	Ice(Ice const &source);	// copy constructor
	~Ice(void);				// destructor

	Ice &operator=(Ice const &source); // copy assignment operator overload
	
	Ice *clone() const;
	void use(ICharacter &target);
};
