/*
* Hunter Chu
* October 23rd, 2018
* checks for matches in the Connect 4 grid
*/

#include <iostream>

int main() {

	bool player1Win = false;
	bool player2Win = false;

	//char that wins is stored for output later
	char winSymbol = '0';
	char check;

	char gameArray[6][7];

	//i = horizontal
	//j = vertical
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			gameArray[i][j] = '0';
			//printf("[%c]", gameArray[i][j]);
		}
		//printf("\n");
	}

	
	gameArray[3][0] = '@';
	gameArray[2][4] = '@';
	gameArray[0][5] = '@';
	gameArray[1][6] = '@';
	gameArray[5][2] = '@';
	gameArray[5][6] = '☻';
	gameArray[3][6] = '☻';
	gameArray[2][6] = '☻';
	gameArray[4][6] = '☻';
	

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 7; j++) {
			check = gameArray[i][j];
			//right horizontal
			if ((i + 1 < 7) && (gameArray[i + 1][j] == check)) {
				if ((i + 1 < 7) && (gameArray[i + 2][j] == check)) {
					if ((i + 1 < 7) && (gameArray[i + 3][j] == check)) {
						winSymbol = check;
					}
				}
				//left horizontal
			}
			else if ((i - 1 > -1) && (gameArray[i - 1][j] == check)) {
				if ((i - 1 > -1) && (gameArray[i - 2][j] == check)) {
					if ((i - 1 > -1) && (gameArray[i - 3][j] == check)) {
						winSymbol = check;
					}
				}
				//up vertical
			}
			else if ((j + 1 < 8) && (gameArray[i][j + 1] == check)) {
				if ((j + 1 < 8) && (gameArray[i][j + 2] == check)) {
					if ((j + 1 < 8) && (gameArray[i][j + 3] == check)) {
						winSymbol = check;
					}
				}
				//down vertical
			}
			else if ((j - 1 > -1) && (gameArray[i - 1][j] == check)) {
				if ((j - 1 > -1) && (gameArray[i - 2][j] == check)) {
					if ((j - 1 > -1) && (gameArray[i - 3][j] == check)) {
						winSymbol = check;
					}
				}
				//upper-right diagonal
			}
			else if ((i + 1 < 7) && (j + 1 < 8) && (gameArray[i + 1][j + 1] == check)) {
				if ((i + 1 < 7) && (j + 1 < 8) && (gameArray[i + 2][j + 2] == check)) {
					if ((i + 1 < 7) && (j + 1 < 8) && (gameArray[i + 3][j + 3] == check)) {
						winSymbol = check;
					}
				}
				//lower-right diagonal
			}
			else if ((i + 1 < 7) && (j - 1 > -1) && (gameArray[i + 1][j - 1] == check)) {
				if ((i + 1 < 7) && (j - 1 > -1) && (gameArray[i + 2][j - 2] == check)) {
					if ((i + 1 < 7) && (j - 1 > -1) && (gameArray[i + 3][j - 3] == check)) {
						winSymbol = check;
					}
				}
				//lower-left diagonal
			}
			else if ((i - 1 > -1) && (j - 1 > -1) && (gameArray[i - 1][j - 1] == check)) {
				if ((i - 1 > -1) && (j - 1 > -1) && (gameArray[i - 2][j - 2] == check)) {
					if ((i - 1 > -1) && (j - 1 > -1) && (gameArray[i - 3][j - 3] == check)) {
						winSymbol = check;
					}
				}
				//upper-left diagonal
			}
			else if ((i - 1 > -1) && (j + 1 < 8) && (gameArray[i - 1][j + 1] == check)) {
				if ((i - 1 > -1) && (j + 1 < 8) && (gameArray[i - 2][j + 2] == check)) {
					if ((i - 1 > -1) && (j + 1 < 8) && (gameArray[i - 3][j + 3] == check)) {
						winSymbol = check;
					}
				}
			}
		}
	}


	if (winSymbol == '@') {
		printf("Player 1 wins!");
	}
	else if (winSymbol == '☻') {
		printf("Player 2 wins!");
	}

	std::cin.ignore();
	std::cin.get();
	return 0;

}
