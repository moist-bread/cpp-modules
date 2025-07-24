/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 07:37:48 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/07/24 07:55:00 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = 1;
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created";
	std::cout << std::endl;

	return;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed";
	std::cout << std::endl;

	return;
}