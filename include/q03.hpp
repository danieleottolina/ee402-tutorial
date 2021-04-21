/*
 * q03.hpp
 *
 *  Created on: Apr 16, 2021
 *      Author: daniele
 *
 *
 * Enumerated data type are compile time constants, so they can't be defined using a list with
 * variable size.
 *
 */

#ifndef Q03_HPP_
#define Q03_HPP_

class Vehicle {

private:

	enum color {};
	enum manufacturer {};
	enum model {};

public:

	virtual void display();
	void setColor();
	void setManufacturer();
	void setModel();
	Vehicle();
	virtual ~Vehicle();
};


#endif /* Q03_HPP_ */
