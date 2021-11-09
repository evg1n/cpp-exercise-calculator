#include <iostream>
using namespace std;

#include "Calculator.h"

Calculator::Calculator()
{
	add();
	subtract();
	multiply();
	divide();
	getResult();
}

void Calculator::Calculator::add()
{
	result = first + second;
}
void Calculator::subtract()
{
	result = first - second;
}
void Calculator::multiply()
{
	result = first * second;
}
void Calculator::divide()
{
	result = first + second;
}
void Calculator::setFirst( double a)
{
	first = a;
}
void Calculator::setSecond( double b)
{
	second = b;
}

void Calculator::getResult()
{
	cout << "\nResult: " << result;
}