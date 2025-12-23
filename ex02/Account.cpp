/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majkijew <majkijew@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/22 16:39:59 by majkijew          #+#    #+#             */
/*   Updated: 2025/12/23 23:45:16 by majkijew         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/time.h>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account() : _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	_nbAccounts++;						
}

Account::Account(int initial_deposit)
	: _accountIndex(_nbAccounts),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += _amount;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex
			  << ";amount:" << _amount
			  << ";created\n";
}


// Account::Account(int initial_deposit) {
// 		std::cout << "" ;
// }

Account::~Account() {
	// std::cout << "index:" << _accountIndex
	// 		  << ";amount:" << _amount
	// 		  << ";closed\n";
	_nbAccounts--;
	_totalAmount -= _amount;
}

int Account::getNbAccounts() {
	return (_nbAccounts);
}

int	Account::getTotalAmount() {
	return (_totalAmount);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
	struct	timeval	tp;
	struct	tm		*time;
	
	gettimeofday(&tp, NULL);
	time = localtime(&tp.tv_sec);
	
	std::cout << "[" 
		<< time->tm_year + 1900 << time->tm_mon + 1 << time->tm_mday
		<< "_" << time->tm_hour << time->tm_min << time->tm_sec << "] ";
}

void	Account::displayAccountsInfos() {
		// std::cout << "slay\n";
		//3 razy
		int i = 0;
		Account t;
		_displayTimestamp();
		std::cout << "accounts:" << 8 << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n"; 
}

void	Account::makeDeposit( int deposit ) {
		_nbDeposits++;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
		  << ";p_amount:" << checkAmount()
		  << ";deposit:" << deposit << ";amount:" << checkAmount() + deposit << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal( int withdrawal ) {
		// std::cout << "withdrawals:" << withdrawal << "\n";
		
		// std::cout << "slay\n";
		//8 razy
		return (true);
}

int		Account::checkAmount( void ) const {
		// std::cout << "slay\n"; 0
		
		return (_amount);
}

void	Account::displayStatus( void ) const {

		_displayTimestamp();
		std::cout << "index:" << _accountIndex
		  << ";amount:" << checkAmount()
		  << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}
