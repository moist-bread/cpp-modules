/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 14:22:35 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/11 18:39:40 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

//-‵,┊ needed libs by class
#include <string>

// -->┊( PERSON )┊.´-★☆★

class Contact
{
private:
	std::string name;
	int age;

public:
	Contact();
	Contact(const std::string &name, int age);
	void setName(const std::string &newName);
	void setAge(int newAge);
	std::string getName() const;
	int getAge() const;
	void printInfo() const;
};

#endif