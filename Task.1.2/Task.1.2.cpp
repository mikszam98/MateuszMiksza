#include <iostream>
#include <fstream>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

bool checkIfLowercase(string word) {			//checks if word is all lowercase letters only 

	for (int i = 0; i < word.length(); i++) {
		if (!islower(word[i])) {
			return false;
		}
	}
	return true;
}

int simpleScore(string word) {					// function to calculate the basic score of the word
	int wordScore = 0;
	for (int i = 0; i < word.length(); i++) {
		string letter(1, word[i]);

		if (letter == "a")
			wordScore = wordScore + 1;
		else if (letter == "e")
			wordScore = wordScore + 1;
		else if (letter == "i")
			wordScore = wordScore + 1;
		else if (letter == "o")
			wordScore = wordScore + 1;
		else if (letter == "u")
			wordScore = wordScore + 1;
		else if (letter == "l")
			wordScore = wordScore + 1;
		else if (letter == "n")
			wordScore = wordScore + 1;
		else if (letter == "s")
			wordScore = wordScore + 1;
		else if (letter == "t")
			wordScore = wordScore + 1;
		else if (letter == "r")
			wordScore = wordScore + 1;
		else if (letter == "d")
			wordScore = wordScore + 2;
		else if (letter == "g")
			wordScore = wordScore + 2;
		else if (letter == "b")
			wordScore = wordScore + 3;
		else if (letter == "c")
			wordScore = wordScore + 3;
		else if (letter == "m")
			wordScore = wordScore + 3;
		else if (letter == "p")
			wordScore = wordScore + 3;
		else if (letter == "f")
			wordScore = wordScore + 4;
		else if (letter == "h")
			wordScore = wordScore + 4;
		else if (letter == "v")
			wordScore = wordScore + 4;
		else if (letter == "w")
			wordScore = wordScore + 4;
		else if (letter == "y")
			wordScore = wordScore + 4;
		else if (letter == "k")
			wordScore = wordScore + 5;
		else if (letter == "j")
			wordScore = wordScore + 8;
		else if (letter == "x")
			wordScore = wordScore + 8;
		else if (letter == "q")
			wordScore = wordScore + 10;
		else if (letter == "z")
			wordScore = wordScore + 10;

		else {
			wordScore = wordScore + 0;
		}

	}
	return wordScore;
}

int main()
{
	ifstream fileWithEverything("words.txt");		//opening file

	string wordFromFile;
	int amountOfWords = 0;
	int numOfElements = 0;
	int x;
	vector<tuple<string, int>> vectorWithTuples;	//initialising a tuple

	while (getline(fileWithEverything, wordFromFile)) { // extracts text line by line and puts it into a string
		if (checkIfLowercase(wordFromFile) == true) {

			amountOfWords++;

			x = simpleScore(wordFromFile);

			vectorWithTuples.push_back(make_tuple(wordFromFile, x)); //creates a tuple using word and its basic score and inserts it into a vector

		}

	}
	for (int i = 0; i < wordFromFile.length(); i++) {
		cout << get<0>(vectorWithTuples[i]) << " ";
		numOfElements++;
		cout << get<1>(vectorWithTuples[i]) << endl;
		numOfElements++;											// prints elements of tuples and counts them


		cout << "Amount of words is: " << amountOfWords << endl;
		cout << "Amount of elements is: " << numOfElements << endl;
	}
}

