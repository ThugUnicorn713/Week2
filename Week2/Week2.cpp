// Week2.cpp read/write to files, arrrys, lists, STL, enum and structs
//

#include <iostream>
using namespace std;

void printStars(int userInput);
void ExceriseOne();

int main()
{
	
	ExceriseOne();

}

void ExceriseOne() {
	int userInput;
	//int blanks = 8; basically the number of blanks is the same as the number or userinputs

	do {
		cout << "Enter the number of stars (1-20), to be printed: ";
		cin >> userInput;

	} while (userInput >= 20 && userInput <= 1);


	printStars(userInput);
}

void printStars(int userInput) {

	for (int i = 0; i < userInput; i++) {

		for (int j = 0; j < userInput - i; j++) {
			cout << " ";

		}

		for (int k = 0; k < i; k++) {
			cout << "* ";
		}

		cout << endl;
	}
}

