/*
*
*	BIL142 - WEEK 2 HOMEWORK
*
* Write an arithmetic calculator using C++
*/

#include <iostream>
using namespace std;

class Calculator {
	private:
		int result, first, second;

	public:
		void add()
		{
			result = first + second;
		};

		void subtract() {
			result = first - second;
		}

		void multiply() {
			result = first * second;
		}

		void divide() {
			result = first / second;
		}

		void displayResult() {
			cout << "\nResult: " << result;
		}

		void setFirst(int a){
			first = a;
		}

		void setSecond(int b){
			second = b;
		}
};

int main() {
	int num, calculation;
	
	Calculator myCalculator;

	cout << "Type in first integer:";
	cin >> num;
	myCalculator.setFirst(num);
	
	cout << "\nType in second integer:";
	cin >> num;
	myCalculator.setSecond(num);

	cout << "1- Add\n2- Subtract\n3- Multiply\n4- Divide" << endl << "\nSelect calculation (1,2,3,4):";
	
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

	myCalculator.displayResult();

	return 0;
} 