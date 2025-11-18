/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 15:59:38 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "AMateria.hpp"

// -->┊( CURE )┊.´-★☆★

class Cure: public AMateria
{
public:
	Cure(void);					// default constructor
	Cure(Cure const &source);	// copy constructor
	~Cure(void);				// destructor

	Cure &operator=(Cure const &source); // copy assignment operator overload
	
	Cure *clone() const;
	void use(ICharacter &target);
};
