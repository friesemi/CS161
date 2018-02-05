#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	int x;
	srand(time(NULL));

	x = rand() % 6;
	cout << "x = " << x << endl;

	if(x == 0){
		cout << "Bummer, I'm zero" << endl;
}	else if(x % 2 == 1){
		cout << "I'm an odd number" << endl;
}	else{
		cout << "I'm an even number" << endl;
}
	cout << "Github PLZ" << endl;
/*
	srand(time(NULL));

	x = rand() % 6;
	cout << "x = " << x << endl;
*/
return 0;
}
