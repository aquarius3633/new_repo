/*C++ Tutorial 3
Creating simple guessing game */

#include <iostream>
//#include <stdlib.h>

using namespace std;

int main(){

	int secretNum = 15;
	int guessNum;
	int guessCount = 0;
	int guessLimit = 3;
	bool outofGuesses = false;
	while(secretNum != guessNum && !outofGuesses){
		if(guessCount < guessLimit){
			cout << "Please enter you guessing number: ";
			cin >> guessNum;
			guessCount++;
		} else { outofGuesses = true;}
	}
	if(outofGuesses == true) {
		cout << "You Lose";
	} else { cout << "You win";}

	return 0;

}
