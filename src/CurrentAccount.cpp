/*
 * CurrentAccount.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include "BankingExample.hpp"

CurrentAccount::CurrentAccount(float balanceObject, int accountNumberObject,
		float overdraftLimitObject):
			Account(balanceObject, accountNumberObject), overdraftLimit(overdraftLimitObject)
			{}

void CurrentAccount::display() {
	Account::display();
	std::cout << "Overdraft limit: " << overdraftLimit << std::endl;
}

void CurrentAccount::makeWithdrawal(float amount) {
	if (amount < (balance + overdraftLimit)) {
		balance = (balance - amount);
	}
	else {
		std::cout << "Sum exceeds overdraft limit. Operation aborted." << std::endl;
	}
}

void CurrentAccount::setOverdraftLimit(float amount) {
	overdraftLimit = amount;
}
