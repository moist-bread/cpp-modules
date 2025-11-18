/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/11/18 13:49:42 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

//-‵,┊ needed libs by class
#include <iostream>

//-‵,┊ color defines

#define GRN "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"
#define MAG "\e[0;35m"
#define CYN "\e[0;36m"
#define CYNC "\e[9;36m"

#define URED "\e[4;31m"
#define UYEL "\e[4;33m"
#define UBLU "\e[4;34m"
#define UMAG "\e[4;35m"
#define UCYN "\e[4;36m"

#define DEF "\e[0m"

// -->┊( BRAIN )┊.´-★☆★

class Brain
{
public:
	Brain(void);				// default constructor
	Brain(Brain const &source); // copy constructor
	~Brain(void);				// destructor

	Brain &operator=(Brain const &source); // copy assignment operator overload

	int idea_amount;
	void add_idea(std::string value);
	void display_ideas(void) const;

private:
	static const int _max_ideas = 100;
	std::string ideas[_max_ideas];
};
