/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:16:55 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/14 16:18:51 by pmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <sys/time.h>
#include <iomanip>

int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	_displayTimestamp();
	
	std::cout << "index:" << _nbAccounts<< ";amount:"\
<< this->_amount << ";created" << std::endl;
	_nbAccounts += 1;

}

Account::~Account()
{
	std::cout << "Account Destructor called." << std::endl;
}

void Account::makeDeposit(int deposit)
{
	this->_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		return (true);
	}
	return (false);
}

int	Account::checkAmount()const
{
	return (this->_amount);
}

void Account::displayStatus() const
{
	
}

int Account::getTotalAmount()
{
	return _totalAmount;
}
int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbAccounts()
{
	return _nbAccounts;
}

void Account::displayAccountsInfos()
{
	
}

void Account::_displayTimestamp()
{
	struct timeval tv;
	struct tm tm_local;
	
	gettimeofday(&tv, NULL);
	localtime_r(&tv.tv_sec, &tm_local);
	std::cout << "[" << (tm_local.tm_year + 1900);
	std::cout << std::setw(2) << (tm_local.tm_mon + 1);
	std::cout << std::setw(2) << (tm_local.tm_mday) << "_";
	std::cout << std::setw(2) << (tm_local.tm_hour);
	std::cout << std::setw(2) << (tm_local.tm_min);
	std::cout << std::setw(2) << (tm_local.tm_sec) << "] ";
}