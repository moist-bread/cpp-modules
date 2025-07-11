/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/11 18:39:09 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

//-‵,┊ needed libs by class
#include <string>

// -->┊( PHONEBOOK )┊.´-★☆★

class PhoneBook
{
private:
	std::string name;
	int age;

public:
	PhoneBook();
	PhoneBook(const std::string &name, int age);
	void setName(const std::string &newName);
	void setAge(int newAge);
	std::string getName() const;
	int getAge() const;
	void printInfo() const;
};

#endif