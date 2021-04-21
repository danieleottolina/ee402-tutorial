/*
 * Account.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include "BankingExample2.hpp"

Account2::Account2(float balanceObject, int accountNumberObject) {
	accountNumber = accountNumberObject;
	balance = balanceObject;
}

Account2::~Account2() {
	std::cout << "Destroying Account object..." << std::endl;
}

float Account2::getBalance() {
	return balance;
}

void Account2::setBalance(float newBalance) {
	balance = newBalance;
}

int Account2::getAccountNumber() {
	return accountNumber;
}

void Account2::display() {
	std::cout << "Account number: " << accountNumber << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}

void Account2::makeLodgement(float amount) {
	balance = balance + amount;
}

void Account2::makeWithdrawal(float amount) {
	balance = balance - amount;
}
