/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/16 17:56:01 by rduro-pe         ###   ########.fr       */
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

// -->┊( CLASSES )┊.´-★☆★
#include "PhoneBook.class.hpp"
#include "Contact.class.hpp"

// -->┊( DEFINES )┊.´-★☆★

//-‵,┊ messages

// -->┊( FUNCTION PROTOTYPES? )┊.´-★☆★
bool validate_input(std::string input, char flag);

#endif