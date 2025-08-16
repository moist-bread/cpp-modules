/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rduro-pe <rduro-pe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 07:37:48 by rduro-pe          #+#    #+#             */
/*   Updated: 2025/08/16 15:25:02 by rduro-pe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}


void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
	return ;
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_nbAccounts += 1;
	this->_accountIndex = getNbAccounts() - 1;
	
	_totalAmount += initial_deposit;
	
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created";
	std::cout << std::endl;

	return ;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "closed";
	std::cout << std::endl;

	return ;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "deposit:" << deposit << ";";

	this->_amount += deposit;
	_totalAmount += deposit;
	std::cout << "amount:" << checkAmount() << ";";
	
	this->_nbDeposits += 1;
	std::cout << "nb_deposits:" << this->_nbDeposits;

	_totalNbDeposits += 1;
	std::cout << std::endl;

	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	(void) withdrawal;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << checkAmount() << ";";
	std::cout << "withdrawal:";

	if (withdrawal > checkAmount())
		return ( std::cout << "refused" << std::endl, false);
	std::cout << withdrawal << ";";

	this->_amount -= withdrawal;
	_totalAmount -= withdrawal;
	std::cout << "amount:" << checkAmount() << ";";
	
	this->_nbWithdrawals += 1;
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals;

	_totalNbWithdrawals += 1;
	std::cout << std::endl;
	return (true);
}

int	Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	
	return ;
}

void	Account::_displayTimestamp( void )
{
	time_t timestamp = time(NULL);
	struct tm datetime = *localtime(&timestamp);

	std::cout << "[";

	std::cout << datetime.tm_year + 1900 ;
	if (datetime.tm_mon < 10)
		std::cout << 0;
	std::cout << datetime.tm_mon;
	std::cout << datetime.tm_mday;
	
	std::cout << "_";

	if (datetime.tm_hour < 10)
		std::cout << 0;
	std::cout << datetime.tm_hour;
	if (datetime.tm_min < 10)
		std::cout << 0;
	std::cout << datetime.tm_min;
	if (datetime.tm_sec < 10)
		std::cout << 0;
	std::cout << datetime.tm_sec;

	std::cout << "] ";
	return ;
}

Account::Account( void )
{
	_nbAccounts += 1;
	this->_accountIndex = getNbAccounts() - 1;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";";
	std::cout << "amount:" << checkAmount() << ";";
	std::cout << "created";
	std::cout << std::endl;

	return ;
}
