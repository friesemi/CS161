/*
 *Program name: assign3.cpp
 *Author: Michael Friesen
 *Date: 1st Febuary, 2018
 *Description: Calling different functions from outside of main()
 *Input: Strings for get_int and get_float
 *Output: Boolean values, integers, and manipulated strings
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

/*
 *Function: check_range
 *Description: checks if a test value is between and upper and lower range
 *Parameters: upper_bound, lower_bound, test_value integers, test boolean
 *Pre-conditions: upper_bound, lower_bound, and test_value received from main
 *Post-conditions: test boolean is evaluated
 */
void check_range(int upper_bound, int lower_bound, int test_value){

bool test;	
if(test_value >= lower_bound && test_value <= upper_bound){
	test = true;

cout << "Testing check_range()" << endl;
cout << "Input: " << upper_bound << " " << lower_bound << " " << test_value << " " << " Expected output: True, Actual output: ";

	if(test == true){
		cout << "True, Pass" << endl;
	}
	else{
		cout << "False, Fail" << endl;
	}
}
else{
	cout << "Input: " << upper_bound << " " << lower_bound << " " << test_value << " " << " Expected output: False, Actual output: ";
	cout << "False, Pass" << endl;
}
}


/*
 *Function: is_int
 *Description: checks if a string is an integer
 *Parameters: num string and the test boolean
 *Pre-conditions: num string is received from main
 *Post-conditions: test boolean is evaluated
 */
void is_int(string num){

bool test;
int index = 0;
while(index < num.length()){
	if(num[index] < 48 || num[index] > 57){
		test = false;
		break;
	}
	else if(num == ""){
		test = false;
		break;
	}
	else{
		test = true;
		index++;
	}
}
if(test == false){
	cout << "Input: " << num << " Expected output: False, Actual output: ";
	if(test == true){
		cout << "True, Fail" << endl;	
	}
	else{
		cout << "False, Pass" << endl;
	}
}
else{
	test = true;
	cout << "Testing is_int()" << endl;
	cout << "Input: " << num << " Expected output: True, Actual output: ";
	if(test == true){
		cout << "True, Pass" << endl;
	}
	else{
		cout << "False, Fail" << endl;
	}
}
}


/*
 *Function: is_float
 *Description: checks if a string is a float
 *Parameter: a string for the input, a test boolean and an index integer
 *Pre-conditions: the num strng is received from main
 *Post-conditions: the test boolean is evaluated and returned
 */
void is_float(string num){

bool test;
int index = 0;

for(index; index < num.length(); index++){
        if(num[index] < 48 || num[index] > 57){
		if(num[index] != 46){
			test = false;
	                break;
		}
        }
        else if(num == ""){
                test = false;
                break;
        }
	else{
		test = true;
	}
}
if(test == false){
        cout << "Input: " << num << " Expected output: False, Actual output: ";
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }
}
else{
        test = true;
        cout << "Testing is_float()" << endl;
        cout << "Input: " << num << " Expected output: True, Actual output: ";
        if(test == true){
                cout << "True, Pass" << endl;
        }
        else{
                cout << "False, Fail" << endl;
        }
}
}


/*
 *Function: is_capital
 *Description: checks if an input character is a capital
 *Parameters: a letter character and a test boolean
 *Pre-conditions: a char letter is received from main
 *Post-conditions: the test boolean is evaluated
 */
void is_capital(char letter){

bool test;
if(letter >= 65 && letter <= 90){
	test = true;
        cout << "Testing is_capital()" << endl;
        cout << "Input: " << letter << " Expected output: True, Actual output: ";
        if(test == true){
                cout << "True, Pass" << endl;
        }
        else{
                cout << "False, Fail" << endl;
        }

}
else{
        cout << "Input: " << letter << " Expected output: False, Actual output: ";
	test = false;
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }

}
}



/*
 *Function: is_even
 *Description: takes in a number and checks if it is even
 *Parameters: a num integer and a test boolean
 *Pre-conditions: a num integer is received from main
 *Post-conditions: the test boolean is evaluated
 */
void is_even(int num){

bool test;
if(num % 2 == 0){
	test = true;
        cout << "Testing is_even()" << endl;
        cout << "Input: " << num << " Expected output: True, Actual output: ";
        if(test == true){
                cout << "True, Pass" << endl;
        }
        else{
                cout << "False, Fail" << endl;
        }
}
else{
        cout << "Input: " << num << " Expected output: False, Actual output: ";
	test = false;
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }
}
}


/*
 *Function: is_odd
 *Description: takes a number and checks if it is odd
 *Parameters: a num integer and a test boolean
 *Pre-conditions: a num integer is received from main
 *Post-conditions: the test boolean is evaluated
 */
void is_odd(int num){

bool test;
if(num % 2 == 1){
	test = true;
        cout << "Testing is_odd()" << endl;
        cout << "Input: " << num << " Expected output: True, Actual output: ";
        if(test == true){
                cout << "True, Pass" << endl;
        }
        else{
                cout << "False, Fail" << endl;
        }
}
else{
        cout << "Input: " << num << " Expected output: False, Actual output: ";
	test = false;
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }

}
}


/*
 *Function: equality_test
 *Description: Checks if two numbers are equal
 *Parameters: two test number integers and a result integer
 *Pre-conditions: two test integers are received from main
 *Post-conditions: the result integer is returned
 */
void equality_test(int num1, int num2){

int result;
if(num1 < num2){
	result = -1;
	cout << "Input: " << num1 << " " << num2 << " Expected output: -1, Actual output: ";
	cout << result << endl;
}
else if(num1 == num2){
	result = 0;
	cout << "Testing equality_test()" << endl;
	cout << "Input: " << num1 << " " << num2 << " Expected output: 0, Actual output: ";
	cout << result << endl;
}
else if(num1 > num2){
	result = 1;
	cout << "Input: " << num1 << " " << num2 << " Expected output: 1, Actual output: ";
	cout << result << endl;
}
else{
	cout << "Incorrect input" << endl;
}	
}


/*
 *Function: float_is_equal
 *Description: Takes two floats and checks if they are within a certain precision value 
 *Parameters: two float values to compare and a precision float to get within a range and a test boolean
 *Pre-conditions: the two floats to compare and the precision float are received from main
 *Post-conditions: the test boolean is evaluated
 */
void float_is_equal(float num1, float num2, float precision){

bool test;
if(abs(num1 - num2) < precision){
	test = true;
	cout << "Testing float_is_equal()" << endl;
	cout << "Input: " << num1 << " " << num2 << " " << precision << " Expected output: True, Actual output: ";
       	if(test == true){
       	        cout << "True, Pass" << endl;
	}
	else{
                cout << "False, Fail" << endl;
	}
}
else{
        cout << "Input: " << num1 << " " << num2 <<  " " << precision << " Expected output: False, Actual output: ";
	test = false;
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }
}
}


/*
 *Function: numbers_present
 *Description: Takes a string and tells if there are numbers in the string
 *Parameters: a test boolean, and index integer and a string for the sentence
 *Pre-conditions: the sentence string is received from main
 *Post-conditions: the test boolean is evaluated
 */
void numbers_present(string sentence){

bool test;
int index = 0;
for(index; index < sentence.length(); index++){
	if(sentence[index] >= 48 && sentence[index] <= 57){
		test = true;
	        cout << "Testing numbers_present()" << endl;
	        cout << "Input: " << sentence << " Expected output: True, Actual output: ";
	        if(test == true){
	                cout << "True, Pass" << endl;
	        }
	        else{
	                cout << "False, Fail" << endl;
	        }
		break;
	}
	else if(sentence == ""){
		cout << "Sentence is empty" << endl;
		break;
	}
	else{
	        cout << "Input: " << sentence << " Expected output: False, Actual output: ";
		test = false;
	        if(test == true){
	                cout << "True, Fail" << endl;
	        }
	        else{
	                cout << "False, Pass" << endl;
	        }
		break;
	}
}
}


/*
 *Function: letters_present
 *Description: Takes a string and checks if there are letters present
 *Parameters: a test boolean, an index integer and a string for the sentence
 *Pre-conditions: the sentence string is received from main
 *Post_conditions: the test boolean is evaluated
 */
void letters_present(string sentence){

bool test;
int i = 0;
while(i < sentence.length()){
	if((sentence[i] >= 65 && sentence[i] <= 90) || (sentence[i] >= 97 && sentence[i] <= 122)){
		test = true;
		i++;
		break;
	}
	else if(sentence == ""){
		cout << "Sentence is empty" << endl;
		break;
	}
	else{
		test = false;
		i++;
	}
}
if(test == true){
	cout << "Testing letters_present()" << endl;
        cout << "Input: " << sentence << " Expected output: True, Actual output: ";
        if(test == true){
                cout << "True, Pass" << endl;
        }
        else{
                cout << "False, Fail" << endl;
        }

}
else{
        cout << "Input: " << sentence << " Expected output: False, Actual output: ";
	test = false;
        if(test == true){
                cout << "True, Fail" << endl;
        }
        else{
                cout << "False, Pass" << endl;
        }

}
}


/*
 *Function: contains_substring
 *Description: Takes a string and a substring and checks if the substring is in the string
 *Parameters: two strings to compare a test boolean and an index integer
 *Pre-conditions: the two strings are received from main
 *Post-conditions: the test boolean is evaluated to check for equality
 */
void contains_substring(string sentence, string substring){

int index = 0;
int index2 = 0;
bool test;
if(substring.length() > sentence.length()){
	test = false;
	cout << test << endl;
}

for(index; index < sentence.length(); index++){
	if(sentence[index] == substring[index2]){
		while(sentence[index] == substring[index2] && index2 < substring.length()){
			index++;
			index2++;
		}
		if(index2 == substring.length()){
			test = true;
		        cout << "Testing contains_substring()" << endl;
		        cout << "Input: " << sentence << ", " << substring << " Expected output: True, Actual output: ";
		        if(test == true){
  		                cout << "True, Pass" << endl;
		        }
		        else{
		                cout << "False, Fail" << endl;
		        }
			break;
		}
		else{
			test = false;
		        cout << "Input: " << sentence << ", " << substring << " Expected output: False, Actual output: ";
		        if(test == true){
		                cout << "True, Fail" << endl;
		        }
		        else{
		                cout << "False, Pass" << endl;
		        }
			break;
		}
	}
}
}
//I referenced this code for this function https://stackoverflow.com/a/39938357


/*
 *Function: word_count
 *Description: Takes a sentence and returns the amount of words in the sentence
 *Parameters: an integer counting the words and the string for the sentence
 *Pre-conditions: the string sentence is received from main
 *Post-conditions: the integer for the words is evaluated and printed
 */
void word_count(string sentence){

int words = 1;
for(int i = 0; i < sentence.length(); i++){
	if(sentence[i] == 32){
		words += 1;
	}
	else if(sentence == ""){
		cout << "Empty sentence" << endl;
		break;
	}
}
if(words != 1){
	cout << "Testing word_count()" << endl;
	cout << "Input: " << sentence << " Expected output: 3 words, Actual output: ";
	cout << "There are " << words << " words" << endl;
}
else{
	cout << "Input: " << sentence << " Expected output: 0 words, Actual output: ";
	cout << "There are " << (words - 1) << " words" << endl;
}
}


/*
 *Function: to_upper
 *Description: Takes all the lower case letters in a string and makes them upper case letters
 *Parameters: an index integer, a string with the sentence and a test boolean
 *Pre-conditions: the string sentence is received from main
 *Post-conditions: the sentence is returned with the letters made upper case
 */
void to_upper(string sentence){

int index = 0;
bool test;
while(index < sentence.length()){
	if(sentence[index] >= 'a' || sentence[index] <= 'z'){
		if(sentence[index] < 'a' || sentence[index] > 'z'){
			index++;
			test = false;
		}
		else{
			sentence[index] = sentence[index] - 32;
			index++;
			test = true;
		}
	}
	else if(sentence == ""){
		cout << "Sentence is empty" << endl;
		test = false;
	}
}
cout << "Testing to_upper()" << endl;
cout << "Inputs: \"the cat meows\" and \"123!\"" << endl;
cout << sentence << endl;
}


/*
 *Function: to_lower
 *Description: takes a string and makes all the upper case letters lower case
 *Parameters: an index integer, a string for the sentence and a test boolean
 *Pre-conditions: the string sentence is received from main
 *Post-conditions: the string is returned with the upper case letters made lower case
 */
void to_lower(string sentence){

int index = 0;
bool test;
while(index < sentence.length()){
        if(sentence[index] >= 'A' || sentence[index] <= 'Z'){
		if(sentence[index] < 'A' || sentence[index] > 'Z'){
			index++;
			test = false;
		}
		else{
                	sentence[index] = sentence[index] + 32;
			index++;
			test = true;
		}
        }
	else if(sentence == ""){
		cout << "Sentence is empty" << endl;
		break;
	}
}
cout << "Testing to_lower()" << endl;
cout << "Inputs: \"I AM CALM!\" and \"98469\"" << endl;
cout << sentence << endl;
}


/*
 *Function: get_int
 *Description: Determines if an input string is an integer and returns it
 *Parameters: a string prompt is input by the user 
 *Pre-conditions: the prompt is received from the user and the result and test are initialized
 *Post-conditions: the resulting integer is returned to main and printed
 */
int get_int(string prompt){

int result = 0;
bool test = false;

do{

cout << "Enter an integer: ";
getline(cin, prompt);
int len = prompt.length();

for(int i = 0; i < len; i++){
	if(prompt[i] < 48 || prompt[i] > 57){
		test = false;
		break;
	}
	else{
	test = true;
}
}
}while(test == false);

int len2 = prompt.length();
for(int j = 0; j < len2; j++){
	result += ((int)prompt[j] - 48) * (pow(10, len2 - j - 1));
}
return result;
}


/*
 *Function: get_float
 *Description: Determines if an input string is a float and returns it
 *Parameters: a string for the user input 
 *Pre-conditions: a string is input from the user
 *Post_conditions: the user input is returned to main as a float
 */
float get_float(string prompt1){

float res = 0;
float result = 0;
bool test = false;
int dividend = 10;

do{

cout << "Enter a float: ";
getline(cin, prompt1);
int len = prompt1.length();

for(int i = 0; i < len; i++){
        if(prompt1[i] < 48 || prompt1[i] > 57){
		if(prompt1[i] != 46){
                	test = false;
                	break;
		}
        }
        else{
        test = true;
}
}
}while(test == false);

bool test_decimal = false;
for(int j = 0; j < prompt1.length(); j++){
	if(test_decimal == false && prompt1[j] != 46){
		result *= 10;
		result += (float(prompt1[j]) - 48);
	}

	else if(prompt1[j] == 46){
		test_decimal = true;
	}

	else if(test_decimal == true && prompt1[j] != 46){
		res = (float(prompt1[j]) - 48);
		res /= dividend;
		result += res;
		dividend *= 10;
	}
}

return result;
}


/*
 *Function: main()
 *Description: The main function where the functions are called and given values
 *Parameters: none
 *Pre-conditions: values are established to be passed to other functions
 *Post_conditions: these values are used in the function calls and the results are all returned
 */
int main(){

check_range(3, 1, 2);
check_range(4, 1, 7);
cout << endl;

is_int("123");
is_int("abc2");
cout << endl;
		
is_float("1.23");
is_float("1.d");
cout << endl;

is_capital('A');
is_capital('c');
cout << endl;

is_even(2);
is_even(3);
cout << endl;

is_odd(3);
is_odd(72);
cout << endl;

equality_test(23, 23);
equality_test(2, 20);
equality_test(27, 2);
cout << endl;

float_is_equal(1.3, 2.7, 1.5);
float_is_equal(6.3, 5.2, 0.3);
cout << endl;

numbers_present("12 cats");
numbers_present("cats");
cout << endl;

letters_present("12e4");
letters_present("1234");
cout << endl;

contains_substring("cats and dogs", "cats");
contains_substring("cats and food", "dogs");
cout << endl;

word_count("Programming is fun");
word_count("123");
cout << endl;

to_upper("the cat meows");
to_upper("123!");
cout << endl;

to_lower("I AM CALM!");
to_lower("98469");
cout << endl;

string prompt;
cout << get_int(prompt) << endl;

string prompt1;
cout << get_float(prompt1) << endl;

return 0;
}
