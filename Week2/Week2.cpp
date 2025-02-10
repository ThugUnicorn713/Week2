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
void ExceriseThree();


struct bookInfo;

void saveToFile(bookInfo newBook);

void loadToFile(bookInfo newBook);


int main()
{
	
	
	//ExceriseOne();
	ExceriseTwo();

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
	newBook.title = "The Child Theif";
	newBook.author = "Brom";
	newBook.pubYear = 2009;

	saveToFile(newBook);
	loadToFile(newBook);
}


void saveToFile(bookInfo newBook){
	
	ofstream outf("Books.txt");

	outf << newBook.title << endl;
	outf << newBook.author << endl;
	outf << newBook.pubYear << endl;
	outf.close();
}

void loadToFile(bookInfo newBook) {

	string tempYear;

	ifstream inf("Books.txt");

		//inf >> newBook.title;
		getline(inf, newBook.title);
		cout << newBook.title << endl;

		//inf >> newBook.author;
		getline(inf, newBook.author);
		cout << newBook.author << endl;

		//inf >> newBook.pubYear;
		getline(inf, tempYear);
		newBook.pubYear = stoi(tempYear);
		cout << newBook.pubYear << endl;
		

}



