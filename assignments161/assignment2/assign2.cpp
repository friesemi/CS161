/*
 * Program Name:Assign2.cpp
 * Author:Michael Friesen
 * Date:17 January, 2018
 * Description:A fun text adventure to survive the city
 * Input:User input for directions
 * Output:Outcome of users choice in direction
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	int destination = 0, steps = 0, path = 0;

	cout << "Can you make it through the city in time for the sale?" << endl;
	cout << "Choose a direction to go (1 for left, 2 for straight, 3 for right) : " << endl;
	cin >> path;

while(steps <= 4){                 //adjust steps for longer game
	srand(time(NULL));
	int x = rand() % 40;

        if(path == 1){
                destination = destination + 1;
/*Start of possible random event*/
		        if(x <= 1){
			        cout << "You got directions from a stranger and found your way!\nYou win!!" << endl;
				exit(0);

}			else if(x == 20){
       				cout << "You were mugged of all your money and feel sad!\nYou lose!" << endl;
				exit(0);

}


/*Start of possible outcomes for each value*/
			if(destination == 1){
				cout << "You pass under a tree full of singing blue birds." << endl << endl;

}			else if(destination == 2){
				cout << "A large dog walks by and greets you with a small bark." << endl << endl;

}			else if(destination == 3){
				cout << "You walk past a small pond with ducks playing around." << endl << endl;

}			else if(destination == 4){
				cout << "You approach a sprawling intersection full of cars rushing about." << endl << endl;

}			else if(destination == 5){
				cout << "You pass the local park and see a large group of children playing." << endl << endl;

}			else if(destination == 6){
				cout << "The store feels closer, but which direction was it?" << endl << endl;

}			else if(destination == 7){
				cout << "Passing by an alley you see a cat that runs by your feet." << endl << endl;

}			else if(destination == 8){
				cout << "You see a sign that depicts the store is close by" << endl << endl;

}			else if(destination == 9){
				cout << "You feel a sense of urgency as the sale grows closer" << endl << endl;

}			else if(destination == 10){
				cout << "You recall that the store is nearby and shouldn't be too far." << endl << endl;

}			else if(destination == 11){
				cout << "The fresh air feels delightful as you walk down the street." << endl << endl;

}			else if(destination == 12){
				cout << "You finally made it to the store in time for the sale.\nYou win!" << endl <<endl;

}
                steps++;

}	else if(path == 2){
                destination = destination + 2;
/*Start of possible random event*/
		        if(x <= 1){
			        cout << "You got directions from a stranger and found your way!\nYou win!!" << endl;
				exit(0);

}			else if(x == 20){
      				cout << "You were mugged of all your money and feel sad!\nYou lose!" << endl;
				exit(0);

}


/*Start of possible outcomes for each value*/
                        if(destination == 2){
                                cout << "A large dog walks by and greets you with a small bark." << endl << endl;

}                       else if(destination == 3){
                                cout << "You walk past a small pond with ducks playing around." << endl << endl;

}                       else if(destination == 4){
                                cout << "You approach a sprawling intersection full of cars rushing about." << endl << endl;

}                       else if(destination == 5){
                                cout << "You pass the local park and see a large group of children playing." << endl << endl;

}                       else if(destination == 6){
                                cout << "The store feels closer, but which direction was it?" << endl << endl;

}                       else if(destination == 7){
                                cout << "Passing by an alley you see a cat that runs by your feet." << endl << endl;

}                       else if(destination == 8){
                                cout << "You see a sign that depicts the store is close by" << endl << endl;

}                       else if(destination == 9){
                                cout << "You feel a sense of urgency as the sale grows closer" << endl << endl;

}                       else if(destination == 10){
                                cout << "You recall that the store is nearby and shouldn't be too far." << endl << endl;

}                       else if(destination == 11){
                                cout << "The fresh air feels delightful as you walk down the street." << endl << endl;

}                       else if(destination == 12){
                                cout << "You finally made it to the store in time for the sale.\nYou win!" << endl << endl;
                                exit(0);

}

		steps++;


}	else if(path == 3){
                destination = destination + 3;
/*Start of possible random event*/
		        if(x <= 1){
			        cout << "You got directions from a stranger and found your way!\nYou win!!" << endl;
				exit(0);

}			else if(x == 20){
				cout << "You were mugged of all your money and feel sad!\nYou lose!" << endl;
				exit(0);

}


/*Start of possible outcomes for each value*/
                        if(destination == 3){
                                cout << "You walk past a small pond with ducks playing around." << endl << endl;

}                       else if(destination == 4){
                                cout << "You approach a sprawling intersection full of cars rushing about." << endl << endl;

}                       else if(destination == 5){
                                cout << "You pass the local park and see a large group of children playing." << endl << endl;

}                       else if(destination == 6){
                                cout << "The store feels closer, but which direction was it?" << endl << endl;

}                       else if(destination == 7){
                                cout << "Passing by an alley you see a cat that runs by your feet." << endl << endl;

}                       else if(destination == 8){
                                cout << "You see a sign that depicts the store is close by" << endl << endl;

}                       else if(destination == 9){
                                cout << "You feel a sense of urgency as the sale grows closer" << endl << endl;

}                       else if(destination == 10){
                                cout << "You recall that the store is nearby and shouldn't be too far." << endl << endl;

}                       else if(destination == 11){
                                cout << "The fresh air feels delightful as you walk down the street." << endl << endl;

}                       else if(destination == 12){
                                cout << "You finally made it to the store in time for the sale.\nYou win!" << endl << endl;
                                exit(0);

}

		steps++;


}
                cout << "Enter a new direction" << endl;
                cin >> path;
}
	if(destination == 12){
		cout << "You made it to the sale\nYou win!" << endl;

}	else{
		cout << "You got lost and missed the sale\nYou lose." << endl;
}

	return 0;
}
