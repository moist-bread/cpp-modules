/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 14:14:19 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include "IMateriaSource.hpp"

// -->┊( MATERIASOURCE )┊.´-★☆★

class MateriaSource: public IMateriaSource
{
public:
	MateriaSource(void);						// default constructor
	MateriaSource(MateriaSource const &source);	// copy constructor
	~MateriaSource(void);						// destructor

	MateriaSource &operator=(MateriaSource const &source); // copy assignment operator overload
	
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};
