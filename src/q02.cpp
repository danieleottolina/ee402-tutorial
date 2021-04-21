/*
 * q02.cpp
 *
 *  Created on: Apr 16, 2021
 *      Author: daniele
 */

#include <iostream>
#include "q02.hpp"

int blackjack(int number1, int number2) {
	int diff = number1 - number2;
	if (diff >= 0) {
		if (number1>21) {
			if (number2<21) {
				return number2;
			}
			else {
				return 0;
			}
		}
		return number1;
	}
	else {
		if(number2>21) {
			if (number2>21) {
				return number1;
			}
			else {
				return 0;
			}
		}
		return number2;
	}
}

void q02VerificationFunction() {
	std::cout << blackjack(19,21) << std::endl;
	std::cout << blackjack(21,19) << std::endl;
	std::cout << blackjack(19,22) << std::endl;
}
