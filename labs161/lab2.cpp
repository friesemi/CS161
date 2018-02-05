#include <iostream>
#include <climits>
#include <cmath>
using namespace std;

int main(){

	cout << "Size of Int = " << sizeof(int) << " bytes" << endl;
	cout << "Min signed Int = " << INT_MIN << endl;
	cout << "Max signed Int = " << INT_MAX << endl;
	cout << "Max unsigned Int = " << UINT_MAX << endl;
	cout << "Min unsigned Int = 0" << endl << endl;

	int n;
	int result = 0;
	cout << "Enter a whole number less than 9: " << endl;
	cin >> n;
	result = pow(2, n);
	cout << "Max number in unsigned = " << result << endl;
	result = UINT_MAX + 1;                                         //unsigned +1
	cout << "Max number in unsigned + 1 = " << result <<endl;      //unsigned +1

	result = pow(2, (n-1));
	cout << "Max number in signed = " << result << endl;
//	result = INT_MAX + 1;                                          //signed +1
//	cout << "Max number in signed + 1 = " << result << endl;       //signed +1

	result = pow(2, n) - 1;
	cout << "Min number in unsigned = " << result << endl;
	result = 0 - 1;                                                //unsigned -1
	cout << "Min number in unsigned - 1 = " << result << endl;     //unsigned -1

	result = pow(2, (n-1)) - 1;
	cout << "Min number in signed = " << result << endl;
//	result = INT_MIN - 1;                                          //signed -1
//	cout << "Min number in signed - 1 = " << result << endl;       //signed -1
	return 0;
}
