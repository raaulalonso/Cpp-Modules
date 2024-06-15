/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 16:38:42 by raalonso          #+#    #+#             */
/*   Updated: 2024/06/16 01:08:36 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

using std::cout;

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
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
	cout << "accounts:" << _nbAccounts
		 << ";total:" << _totalAmount
		 << ";deposits:" << _totalNbDeposits
		 << ";withdrawals:" << _totalNbWithdrawals
		 << "\n";
}

Account::Account( int initial_deposit ) // constructor
{
	_displayTimestamp();
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	cout << "index:" << this->_accountIndex
		 << ";amount:" << this->_amount
		 << ";created\n";
}

Account::~Account( void ) // destructor
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex
		 << ";amount:" << this->_amount
		 << "closed\n";
}

void	Account::makeDeposit( int deposit )
{
	int p_amount = this->_amount;

	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex
		 << ";p_amount:" << p_amount
		 << ";deposit:" << deposit
		 << ";amount:" << this->_amount
		 << ";nb_deposits:" << this->_nbDeposits
		 << "\n";
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool accepted;
	int p_amount = this->_amount;

	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		accepted = true;
	}
	else
		accepted = false;
	_displayTimestamp();
	cout << "index:" << this->_accountIndex
		 << ";p_amount" << p_amount;
	if (accepted == true)
	{
		cout << ";withdrawal:" << withdrawal
			 << ";amount:" << this->_amount
			 << ";nb_withdrawals:" << this->_nbWithdrawals
			 << "\n"; 
	}
	else
		cout << ";withdrawals:refused\n";
	return (accepted);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	cout << "index:" << this->_accountIndex
		 << ";amount:" << this->_amount
		 << ";deposits:" << this->_nbDeposits
		 << ";withdrawals" << this->_nbWithdrawals
		 << "\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t result = std::time(NULL);

	std::cout << std::setfill('0') << "[" << 1900 + std::localtime(&result)->tm_year
			  << std::setw(2) << 1 + std::localtime(&result)->tm_mon
			  << std::setw(2) << std::localtime(&result)->tm_mday
			  << "_"
			  << std::setw(2) << std::localtime(&result)->tm_hour
			  << std::setw(2) << std::localtime(&result)->tm_min
			  << std::setw(2) << std::localtime(&result)->tm_sec
			  << "] " << std::flush;
}
