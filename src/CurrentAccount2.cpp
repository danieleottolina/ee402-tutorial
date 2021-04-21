/*
 * CurrentAccount.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include "BankingExample2.hpp"

CurrentAccount2::CurrentAccount2(float balanceObject, int accountNumberObject,
		float overdraftLimitObject):
			Account2(balanceObject, accountNumberObject), overdraftLimit(overdraftLimitObject)
			{}

void CurrentAccount2::display() {
	Account2::display();
	std::cout << "Overdraft limit: " << overdraftLimit << std::endl;
}

void CurrentAccount2::makeWithdrawal(float amount) {
	if (amount < (balance + overdraftLimit)) {
		balance = (balance - amount);
	}
	else {
		std::cout << "Sum exceeds overdraft limit. Operation aborted." << std::endl;
	}
}

void CurrentAccount2::setOverdraftLimit(float amount) {
	overdraftLimit = amount;
}
