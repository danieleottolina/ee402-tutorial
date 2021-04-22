/*
 * BankingExample.hpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#ifndef BANKINGEXAMPLE_HPP_
#define BANKINGEXAMPLE_HPP_

class Account {

protected:

	int accountNumber;
	float balance;

public:

	Account(float balance, int accountNumber);
	virtual ~Account();
	float getBalance();
	void setBalance(float balance);
	int getAccountNumber();
	virtual void display();
	virtual void makeLodgement(float);
	virtual void makeWithdrawal(float);
};

class CurrentAccount: public Account {

protected:

	float overdraftLimit;

public:

	CurrentAccount(float balance, int accountNumber, float overdraftLimit);
	virtual void display();
	virtual void makeWithdrawal(float);
	virtual void setOverdraftLimit(float);
};

#endif /* BANKINGEXAMPLE_HPP_ */
