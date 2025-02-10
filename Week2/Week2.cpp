// Week2.cpp read/write to files, arrrys, lists, STL, enum and structs
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//methods
void printStars(int userInput);
void ExceriseOne();
void ExceriseTwo();


struct bookInfo;

void saveToFile(bookInfo newBook);


int main()
{
	
	
	//ExceriseOne();
	//ExceriseTwo();

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

struct bookInfo
{
	string title;
	string author;
	int pubYear;

};

void ExceriseTwo() {

	bookInfo newBook;
	newBook.title = "The Child Theif\n";
	newBook.author = "Brom\n";
	newBook.pubYear = 2009;

	saveToFile(newBook);

}

void saveToFile(bookInfo newBook){
	
	ofstream outf("Books.txt");

	outf << newBook.title;
	outf << newBook.author;
	outf << newBook.pubYear;
	outf.close();
}



