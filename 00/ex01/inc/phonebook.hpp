/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/21 18:41:36 by rduro-pe         ###   ########.fr       */
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
#include <limits>

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
	FULL,
	SEARCH,
	EMPTY
} t_input_type;

//-‵,┊ messages

// -->┊( FUNCTION PROTOTYPES? )┊.´-★☆★

void display_argc(void);
void display_banner(void);
void display_commands(void);
void display_incorrect_command(std::string input);
void display_forced_exit(void);
void display_invalid_input(int flag);
void display_full_warn(void);
void display_book_top(void);
void display_book_bottom(int n);

#endif