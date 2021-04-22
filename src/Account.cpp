/*
 * Account.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include <string>
#include "BankingExample.hpp"

Account::Account(float balanceObject, int accountNumberObject) {
	accountNumber = accountNumberObject;
	balance = balanceObject;
}

Account::~Account() {
	std::cout << "Destroying Account object..." << std::endl;
}

float Account::getBalance() {
	return balance;
}

void Account::setBalance(float newBalance) {
	balance = newBalance;
}

int Account::getAccountNumber() {
	return accountNumber;
}

void Account::display() {
	std::cout << "Account number: " << accountNumber << std::endl;
	std::cout << "Account type: " << getAccountType() << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}

void Account::makeLodgement(float amount) {
	balance = balance + amount;
}

void Account::makeWithdrawal(float amount) {
	balance = balance - amount;
}
