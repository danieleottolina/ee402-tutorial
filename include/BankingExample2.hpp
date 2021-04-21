/*
 * BankingExample.hpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#ifndef BANKINGEXAMPLE2_HPP_
#define BANKINGEXAMPLE2_HPP_

class Account2 {

protected:

	int accountNumber;
	float balance;

public:

	Account2(float balance, int accountNumber);
	virtual ~Account2();
	float getBalance();
	void setBalance(float balance);
	int getAccountNumber();
	virtual void display();
	virtual void makeLodgement(float);
	virtual void makeWithdrawal(float);
};

class CurrentAccount2: public Account2 {

protected:

	float overdraftLimit;

public:

	CurrentAccount2(float balance, int accountNumber, float overdraftLimit);
	virtual void display();
	virtual void makeWithdrawal(float);
	virtual void setOverdraftLimit(float);
};

#endif /* BANKINGEXAMPLE2_HPP_ */
