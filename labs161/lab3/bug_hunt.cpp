#include <iostream>
#include <string>
using namespace std;

int main() {
	string my_str;
	cout << "Please give a string without spaces: ";
	cin >> my_str;
	int length = my_str.length();                      //semicolon needed
	bool flag;                                         //don't declare flag as true
	for(int i=0; i<(length/2); i++) {
		if (my_str[i] == my_str[length-1]) {       //needs to be equal not not equal
			flag = true;	
		}	
	}
	if (flag) {
		cout << "It's a palindrome" << endl;	   
	}
	else {
		cout << "It's not a palindrome" << endl;   //<< data transferred wrong direction	
	}

	return 0;	
}
