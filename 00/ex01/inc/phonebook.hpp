/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/17 18:53:41 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

// -->┊( LIBS )┊.´-★☆★
#include <cctype>
#include <cstdio>
#include <iostream>
#include <new>
#include <string>
#include <string>
#include <sstream>

// -->┊( CLASSES )┊.´-★☆★
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

// -->┊( DEFINES )┊.´-★☆★

typedef enum s_input_type
{
	FIRST_NAME,
	LAST_NAME,
	NICK_NAME,
	PHONE_NUM,
	SECRET,
	FULL
} t_input_type;

//-‵,┊ messages

// -->┊( FUNCTION PROTOTYPES? )┊.´-★☆★

#endif