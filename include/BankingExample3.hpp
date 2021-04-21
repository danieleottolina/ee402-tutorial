/*
 * BankingExample.hpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#ifndef BANKINGEXAMPLE3_HPP_
#define BANKINGEXAMPLE3_HPP_

#include <string>

class Account3 {

protected:

	int accountNumber;
	float balance;

public:

	Account3(float balance, int accountNumber);
	virtual ~Account3();
	virtual std::string getAccountType() = 0;
	float getBalance();
	void setBalance(float balance);
	int getAccountNumber();
	virtual void display();
	virtual void makeLodgement(float);
	virtual void makeWithdrawal(float);
};

class CurrentAccount3: public Account3 {

protected:

	float overdraftLimit;

public:

	CurrentAccount3(float balance, int accountNumber, float overdraftLimit);
	virtual std::string getAccountType();
	virtual void display();
	virtual void makeWithdrawal(float);
	virtual void setOverdraftLimit(float);
};

#endif /* BANKINGEXAMPLE3_HPP_ */
