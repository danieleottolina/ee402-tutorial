/*
 * q01.cpp
 *
 *  Created on: Apr 15, 2021
 *      Author: daniele
 */

#include <iostream>
#include <cmath>
#include "q01.hpp"

void square(int &number) {
	number = std::pow(number,2);
	return;
}

void q01VerificationFunction() {
	int number = 8;
	std::cout << "Variable address: " << &number << std::endl;
	std::cout << number << ", ";
	square(number);
	std::cout << number << std::endl;
}
