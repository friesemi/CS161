#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(){
//user inputs
char y_n;
int number_objects = 0;

//non-user inputs
int index = 0;
string password;
char x;

srand(time(NULL));


cout << "Are you ready to generate a password?" << endl;

cout << "Do you want to use letters? y/n" << endl;
cin >> y_n;

if(y_n == 'y'){
	cout << "Do you want upper case letters? y/n" << endl;
	cin >> y_n;
	
	if(y_n == 'y'){
		cout << "How many upper cases?" << endl;
		cin >> number_objects;
		
		while(index < number_objects){
			//int random = rand() % 26 + 65;
			x = rand() % 26 + 65;
			password += x;
			index++;
		}

		cout << "Do you want lower cases? y/n" << endl;
		cin >> y_n;

                if(y_n == 'y'){
			index = 0;
			cout << "How many lower cases?" << endl;
	                cin >> number_objects;
            
	                while(index < number_objects){
	                //int random = rand() % 26 + 97;
	                x = rand() % 26 + 97;
	                password += x;
			index++;
			}                                                                                   
		}

	}	
	else if(y_n == 'n'){
		index = 0;
		cout << "How many lower cases?" << endl;
                cin >> number_objects;

                while(index < number_objects){
                        //int random = rand() % 26 + 97;
                        x = rand() % 26 + 97;
                        password += x;
			index++;
		}
	}
}
cout << "Do you want numbers? y/n" << endl;
cin >> y_n;

if(y_n == 'y'){
	index = 0;
	cout << "How many numbers?" << endl;
	cin >> number_objects;

	while(index < number_objects){	
	//int random = rand() % 10;
	int y = rand() % 10 + 48;
	password += y;
	index++;

	}	
}


cout << "Your password is: " << password << endl;
return 0;
}
