#include <iostream>
#include <cstdlib>

using namespace std;

int a_to_i(char character){
	cout << "Enter a character: ";
	cin >> character;
	return character;
}

char i_to_a(int decimal){
	cout << "Enter a decimal value" << endl;
	cin >> decimal;
	return decimal;
}


int main(){

char character;
cout << a_to_i((int) character) << endl;

int decimal;
cout << i_to_a((char) decimal) << endl;

return 0;
}
