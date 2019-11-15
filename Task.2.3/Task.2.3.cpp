#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	const int numRows = 15;
	const int numCols = 15;		//dimentions the board

	char board[numRows][numCols] = { {'T','*','*','2','*','*','*','T','*','*','*','2','*','*','T'},
									{'*','D','*','*','*','3','*','*','*','3','*','*','*','D','*'},
									{'*','*','D','*','*','*','2','*','2','*','*','*','D','*','*'},
									{'2','*','*','D','*','*','*','2','*','*','*','D','*','*','2'},
									{'*','*','*','*','D','*','*','*','*','*','D','*','*','*','*'},
									{'*','3','*','*','*','3','*','*','*','3','*','*','*','3','*'},
									{'*','*','2','*','*','*','2','*','2','*','*','*','2','*','*'},
									{'T','*','*','2','*','*','*','S','*','*','*','2','*','*','T'},
									{'*','*','2','*','*','*','2','*','2','*','*','*','2','*','*'},
									{'*','3','*','*','*','3','*','*','*','3','*','*','*','3','*'},
									{'*','*','*','*','D','*','*','*','*','*','D','*','*','*','*'},
									{'2','*','*','D','*','*','*','2','*','*','*','D','*','*','2'},
									{'*','*','D','*','*','*','2','*','2','*','*','*','D','*','*'},
									{'*','D','*','*','*','3','*','*','*','3','*','*','*','D','*'},
									{'T','*','*','2','*','*','*','T','*','*','*','2','*','*','T'} };
									//board layout

	for (int row = 0; row < numRows; row++) {
		for (int col = 0; col < numCols; col++) {
			cout << board[row][col] << " ";			//prints the board
		}
		cout << endl;
	}

	int rowNum;
	int colNum{};

	char word;
	cout << "insert location row x column (eg. 1 2): ";		
	cin >> rowNum;							// allows user to input coordinates and char
	cin >> colNum;
	cout << "insert value: ";
	cin >> word;


	//char wordToArray[word.length()];// - ignore -

	board[rowNum - 1][colNum - 1] = word; // inserts the char into array

	for (int row = 0; row < numRows; row++) {
		for (int col = 0; col < numCols; col++) {
			cout << board[row][col] << " ";			// prints array with new char in the desired position
		}
		cout << endl;
	}

	return 0;
}