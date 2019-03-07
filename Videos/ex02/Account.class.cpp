// ************************************************************************** //
//                                                                            //
//                Account.class.cpp for GlobalBanksters United                //
//                Created on  : Thu Nov 20 19:43:15 1989                      //
//                Last update : Wed Jan 04 14:54:06 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

// ************************************************************************** //
//                               Account Class                                //
// ************************************************************************** //

#include "Account.class.hpp"

Account::Account( void ) {

	return;
}

Account::~Account( void ) {

	return;
};

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}
int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}
int	Account::getNbDeposits( void ) {
	return Account::_nbDeposits;
}
int	Account::getNbWithdrawals( void ) {
	return ;
}
void	Account::displayAccountsInfos( void ) {
	return ;
}
