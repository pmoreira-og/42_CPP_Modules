/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoreira <pmoreira@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 12:16:55 by pmoreira          #+#    #+#             */
/*   Updated: 2025/10/16 16:15:47 by pmoreira         ###   ########.fr       */
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

	this->_accountIndex = _nbAccounts;
	std::cout << "index:" << this->_accountIndex << ";amount:"\
<< this->_amount << ";created" << std::endl;
	_nbAccounts += 1;
	_totalAmount += initial_deposit;

}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits += 1;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
	_totalNbDeposits += 1;
	_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	if (this->_amount >= withdrawal)
	{
		std::cout << ";withdrawal:" << withdrawal;
		this->_amount -= withdrawal;
		this->_nbWithdrawals += 1;
		std::cout << ";amount:" << this->checkAmount();
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		if ((_totalAmount - withdrawal) >= 0)
			_totalAmount -= withdrawal;
		_totalNbWithdrawals += 1;
		return (true);
	}
	else
		std::cout << ";withdrawal:refused" << std::endl;
	return (false);
}

int	Account::checkAmount()const
{
	return (this->_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->checkAmount();
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}
int Account::getNbDeposits()
{
	return (_totalNbDeposits);
}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}
int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts();
	std::cout << ";total:" << getTotalAmount();
	std::cout << ";deposits:" << getNbDeposits();
	std::cout << ";withdrawals:" << getNbWithdrawals();
	std::cout << std::endl;
}

void Account::_displayTimestamp()
{
	struct timeval	tv;
	struct tm		tm_local;
	
	gettimeofday(&tv, NULL);
	localtime_r(&tv.tv_sec, &tm_local);
	std::cout << "[" << (tm_local.tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << (tm_local.tm_mon + 1);
	std::cout << std::setfill('0') << std::setw(2) << (tm_local.tm_mday) << "_";
	std::cout << std::setfill('0') << std::setw(2) << (tm_local.tm_hour);
	std::cout << std::setfill('0') << std::setw(2) << (tm_local.tm_min);
	std::cout << std::setfill('0') << std::setw(2) << (tm_local.tm_sec) << "] ";
}