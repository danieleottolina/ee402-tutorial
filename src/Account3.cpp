/*
 * Account.cpp
 *
 *  Created on: Apr 21, 2021
 *      Author: daniele
 */

#include <iostream>
#include <string>
#include "BankingExample3.hpp"

Account3::Account3(float balanceObject, int accountNumberObject) {
	accountNumber = accountNumberObject;
	balance = balanceObject;
}

Account3::~Account3() {
	std::cout << "Destroying Account object..." << std::endl;
}

float Account3::getBalance() {
	return balance;
}

void Account3::setBalance(float newBalance) {
	balance = newBalance;
}

int Account3::getAccountNumber() {
	return accountNumber;
}

void Account3::display() {
	std::cout << "Account number: " << accountNumber << std::endl;
	std::cout << "Account type: " << getAccountType() << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}

void Account3::makeLodgement(float amount) {
	balance = balance + amount;
}

void Account3::makeWithdrawal(float amount) {
	balance = balance - amount;
}
