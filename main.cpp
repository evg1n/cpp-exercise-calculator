/*
*
*	BIL142 - WEEK 2 HOMEWORK
*
* Write an arithmetic calculator using C++
*/

#include <iostream>
using namespace std;

#include "./lib/calculator/Calculator.h"

int main() {
	int num, calculation;
	
	Calculator myCalculator;

	cout << "\nType in first integer:";
	cin >> num;
	myCalculator.setFirst(num);
	
	cout << "\nType in second integer:";
	cin >> num;
	myCalculator.setSecond(num);

	cout << "1- Add\n 2- Subtract\n 3- Multiply\n4- Divide" << "\nSelect calculation (1,2,3,4):";
	
	cin >> calculation;

	switch(calculation){
		case(1):
			myCalculator.add();
			break;
		case(2):
			myCalculator.subtract();
			break;
		case(3):
			myCalculator.multiply();
			break;
		case(4):
			myCalculator.divide();
			break;
			default:
			cout << "Invalid argument. Defaulting to 1...";
			myCalculator.add();
	}

	myCalculator.getResult();

	return 0;
} 