/*
Program Filename:Assignment 1
Author:Michael Friesen
Date:1/10/2018
Description:Simple usage of the cmath library
Input:None
Output:Math answers
*/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout << "cos(2/3) = " << cos(2.0 / 3.0) << endl;
	cout << "2sin(2/3) = " << 2.0*sin(2.0 / 3.0) << endl;
	cout << "tan((-3)/4) = " << tan((-3.0) / 4.0) << endl;
	cout << "log(55) = " << log10(55.0) << endl;
	cout << "ln(60) = " << log(60.0) << endl << endl;

//Steps for log base 2 of 15
	cout << "Find the log base 2 of 15" << endl;
	cout << "ln(x) = log(15) = " << log(15.0) << endl;
	cout << "ln(b) = log(2) = " << log(2.0) << endl;
	cout << "log base 2 of 15 = " << log(15.0) / log(2.0) << endl << endl;

//Steps for log base 4 of 40
	cout << "Find the log base 4 of 40" << endl;
	cout << "ln(x) = log(40) = " << log(40.0) << endl;
	cout << "ln(b) = log(4) = " << log(4.0) << endl;
	cout << "log base 4 0f 40 = " << log(40.0) / log(4.0) << endl << endl;

//Steps for 3 to the power of sinx
	int x = 0;
	x = 1;
	cout << "x = 1" << endl;
	cout << "sin(x) = sin(1) = " << sin(1.0) << endl;
	cout << "3 to the power of sin(1) = " << pow(3, sin(1.0)) << endl << endl;

	x = 10;
	cout << "x = 10" << endl;
	cout << "sin(x) = sin(10) = " << sin(10.0) << endl;
	cout << "3 to the power of sin(10) = " << pow(3, sin(10.0)) << endl << endl;

	x = 100;
	cout << "x = 100" << endl;
	cout << "sin(x) = sin(100.0) = " << sin(100.0) << endl;
	cout << "3 to the power of sin(100) = " << pow(3, sin(100.0)) << endl << endl;

//Steps for log base 2 of (x^2 + 1)
	cout << "log 2 = " << log(2.0) << endl;                                //Used for all three x's
	x = 1;
	cout << "x = 1" << endl;
	cout << "x^2 + 1 = 1^2 + 1 = " << (x ^ 2) + 1 << endl;
	cout << "log(x^2 + 1) = log(1^2 + 1) = " << log((x ^ 2) + 1) << endl;
	cout << "log base 2 of (x^2 + 1) = " << (log((x ^ 2) + 1)) / log(2.0) << endl << endl;

	x = 10;
	cout << "x = 10" << endl;
	cout << "x^2 + 1 = 10^2 + 1 " << (x ^ 2) + 1 << endl;
	cout << "log(x^2 + 1) = log(10^2 + 1) = " << log((x ^ 2) + 1) << endl;
	cout << "log base 2 of (x^2 + 1) = " << (log((x ^ 2) + 1) / log(2)) << endl << endl;

	x = 100;
	cout << "x = 100" << endl;
	cout << "x^2 + 1 = 100^2 + 1" << endl;
	cout << "log(x^2 + 1) = log(1^2 + 1) = " << log((x ^ 2) + 1) << endl;
	cout << "log base 2 of (x^2 + 1) = " << (log((x ^ 2) + 1)) / log(2) << endl << endl;

	return 0;
}
