/*
 * CurrentAccount.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include <string>
#include "BankingExample3.hpp"

CurrentAccount3::CurrentAccount3(float balanceObject, int accountNumberObject,
		float overdraftLimitObject):
			Account3(balanceObject, accountNumberObject), overdraftLimit(overdraftLimitObject)
			{}

std::string CurrentAccount3::getAccountType() {
	return "Current Account";
}

void CurrentAccount3::display() {
	Account3::display();
	std::cout << "Overdraft limit: " << overdraftLimit << std::endl;
}

void CurrentAccount3::makeWithdrawal(float amount) {
	if (amount < (balance + overdraftLimit)) {
		balance = (balance - amount);
	}
	else {
		std::cout << "Sum exceeds overdraft limit. Operation aborted." << std::endl;
	}
}

void CurrentAccount3::setOverdraftLimit(float amount) {
	overdraftLimit = amount;
}
