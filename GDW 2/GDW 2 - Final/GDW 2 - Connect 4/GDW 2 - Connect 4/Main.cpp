#include <iostream>
#include <stdio.h>

int main()
{
	//variable declaration

	int move;
	int board[6][7];

	bool gameWin = false;
	bool end = false;

	int playAgain = false;

	bool player1Win = false;
	bool player2Win = false;

	//char that wins is stored for output later
	char winSymbol = '0';
	char check;

	std::cout << "Please Fullscreen the Window.\nPress 'Enter' to continue once you are done doing so." << std::endl;

	std::cin.ignore();

	system("CLS");

	printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
	printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////     ||||||||||||||||||||||      ||||||||||||||||||||||      ||||||           |||||      ||||||           |||||     ||||||||||||||||||||||      ||||||||||||||||||||||      ||||||||||||||||||||||      |||||            |||||       ////");
	printf("////     ||||||||||||||||||||||      ||||||||||||||||||||||      |||||||          |||||      |||||||          |||||     ||||||||||||||||||||||      ||||||||||||||||||||||      ||||||||||||||||||||||      |||||            |||||       ////");
	printf("////     |||||            |||||      |||||            |||||      ||||| ||         |||||      ||||| ||         |||||     |||||            |||||      |||||            |||||               |||||              |||||            |||||       ////");
	printf("////     |||||            |||||      |||||            |||||      ||||| |||        |||||      ||||| |||        |||||     |||||            |||||      |||||            |||||               |||||              |||||            |||||       ////");
	printf("////     |||||                       |||||            |||||      ||||| ||||       |||||      ||||| ||||       |||||     |||||                       |||||                                |||||              |||||            |||||       ////");
	printf("////     |||||                       |||||            |||||      |||||  ||||      |||||      |||||  ||||      |||||     |||||                       |||||                                |||||              |||||            |||||       ////");
	printf("////     |||||                       |||||            |||||      |||||   ||||     |||||      |||||   ||||     |||||     ||||||||||||                |||||                                |||||              ||||||||||||||||||||||       ////");
	printf("////     |||||                       |||||            |||||      |||||    ||||    |||||      |||||    ||||    |||||     ||||||||||||                |||||                                |||||              ||||||||||||||||||||||       ////");
	printf("////     |||||                       |||||            |||||      |||||    ||||    |||||      |||||    ||||    |||||     |||||                       |||||                                |||||                               |||||       ////");
	printf("////     |||||                       |||||            |||||      |||||     ||||   |||||      |||||     ||||   |||||     |||||                       |||||                                |||||                               |||||       ////");
	printf("////     |||||                       |||||            |||||      |||||      ||||  |||||      |||||      ||||  |||||     |||||                       |||||                                |||||                               |||||       ////");
	printf("////     |||||            |||||      |||||            |||||      |||||       |||| |||||      |||||       |||| |||||     |||||            |||||      |||||            |||||               |||||                               |||||       ////");
	printf("////     |||||            |||||      |||||            |||||      |||||        ||| |||||      |||||        ||| |||||     |||||            |||||      |||||            |||||               |||||                               |||||       ////");
	printf("////     ||||||||||||||||||||||      ||||||||||||||||||||||      |||||         || |||||      |||||         || |||||     ||||||||||||||||||||||      ||||||||||||||||||||||               |||||                               |||||       ////");
	printf("////     ||||||||||||||||||||||      ||||||||||||||||||||||      |||||          |||||||      |||||          |||||||     ||||||||||||||||||||||      ||||||||||||||||||||||               |||||                               |||||       ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                                                         ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                        Press ENTER to Start                                                                                                         ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                         ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~                                                                                         ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("////                                                                                                                                                                                                                                     ////");
	printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");
	printf("/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////");


	std::cin.ignore(); //lets user press enter to start the game

	system("CLS"); //Clears main menu console 

	do {
		while (winSymbol == '0') {

			std::cout << "\n\n\n";

			std::cout << "1  2  3  4  5  6  7" << std::endl;
			std::cout << "-------------------" << std::endl;

			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					board[i][j] = 0;

				}
			}

			for (int i = 0; i < 6; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					std::cout << board[i][j] << "  ";
				}
				std::cout << std::endl;
			}

			std::cout << "-------------------" << std::endl;				


			std::cout << "player 1 please enter the slot number you would like to place your token" << std::endl; // asks player 1 to the slot number they would like to place their token in.

			while (!(std::cin >> move)) // checks if player 1 has input a number
			{
				std::cout << "an ERROR has occured, please enter a number" << std::endl;
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}


			while (move >= 8) // checks if player 1 has input a valid slot number
			{
				std::cout << "please enter a valid slot number" << std::endl;
				//std::cin >> x;
				while (!(std::cin >> move)) // checks if player 1 has input a number
				{
					std::cout << "an ERROR has occured, please enter a number" << std::endl;
					std::cin.clear();
					std::cin.ignore(256, '\n');
				}
			}

			std::cout << "player 2 please enter the slot number you would like to place your token" << std::endl;// asks player 2 to the slot number they would like to place their token in

			while (!(std::cin >> move)) // checks if player 2 has input a number
			{
				std::cout << "an ERROR has occured, please enter a number" << std::endl;
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}

			while (move > 7)// checks if Player 2 has input a valid slot number
			{
				std::cout << "please enter a valid slot number" << std::endl;
				//std::cin >> move;
				while (!(std::cin >> move)) // checks if player 2 has input a number
				{
					std::cout << "an ERROR has occured, please enter a number" << std::endl;
					std::cin.clear();
					std::cin.ignore(256, '\n');
				}
			}

			if (move == 1)
			{
				board[5][0] = 1;
			}
			else if (move == 2)
			{
				board[5][1] = 1;
			}
			else if (move == 3)
			{
				board[5][2] = 1;
			}
			else if (move == 4)
			{
				board[5][3] = 1;
			}
			else if (move == 5)
			{
				board[5][4] = 1;
			}
			else if (move == 6)
			{
				board[5][5] = 1;
			}
			else if (move == 7)
			{
				board[5][6] = 1;
			}

			for (int i = 0; i < 6; i++) {
				for (int j = 0; j < 7; j++) {
					check = board[i][j];
					//right horizontal
					if ((i + 1 < 7) && (board[i + 1][j] == check)) {
						if ((i + 1 < 7) && (board[i + 2][j] == check)) {
							if ((i + 1 < 7) && (board[i + 3][j] == check)) {
								winSymbol = check;
							}
						}
						//left horizontal
					}
					else if ((i - 1 > -1) && (board[i - 1][j] == check)) {
						if ((i - 1 > -1) && (board[i - 2][j] == check)) {
							if ((i - 1 > -1) && (board[i - 3][j] == check)) {
								winSymbol = check;
							}
						}
						//up vertical
					}
					else if ((j + 1 < 8) && (board[i][j + 1] == check)) {
						if ((j + 1 < 8) && (board[i][j + 2] == check)) {
							if ((j + 1 < 8) && (board[i][j + 3] == check)) {
								winSymbol = check;
							}
						}
						//down vertical
					}
					else if ((j - 1 > -1) && (board[i - 1][j] == check)) {
						if ((j - 1 > -1) && (board[i - 2][j] == check)) {
							if ((j - 1 > -1) && (board[i - 3][j] == check)) {
								winSymbol = check;
							}
						}
						//upper-right diagonal
					}
					else if ((i + 1 < 7) && (j + 1 < 8) && (board[i + 1][j + 1] == check)) {
						if ((i + 1 < 7) && (j + 1 < 8) && (board[i + 2][j + 2] == check)) {
							if ((i + 1 < 7) && (j + 1 < 8) && (board[i + 3][j + 3] == check)) {
								winSymbol = check;
							}
						}
						//lower-right diagonal
					}
					else if ((i + 1 < 7) && (j - 1 > -1) && (board[i + 1][j - 1] == check)) {
						if ((i + 1 < 7) && (j - 1 > -1) && (board[i + 2][j - 2] == check)) {
							if ((i + 1 < 7) && (j - 1 > -1) && (board[i + 3][j - 3] == check)) {
								winSymbol = check;
							}
						}
						//lower-left diagonal
					}
					else if ((i - 1 > -1) && (j - 1 > -1) && (board[i - 1][j - 1] == check)) {
						if ((i - 1 > -1) && (j - 1 > -1) && (board[i - 2][j - 2] == check)) {
							if ((i - 1 > -1) && (j - 1 > -1) && (board[i - 3][j - 3] == check)) {
								winSymbol = check;
							}
						}
						//upper-left diagonal
					}
					else if ((i - 1 > -1) && (j + 1 < 8) && (board[i - 1][j + 1] == check)) {
						if ((i - 1 > -1) && (j + 1 < 8) && (board[i - 2][j + 2] == check)) {
							if ((i - 1 > -1) && (j + 1 < 8) && (board[i - 3][j + 3] == check)) {
								winSymbol = check;
							}
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

		/*gameWin = true;*/
		if (gameWin == true) // checks if game has been won
		{
			std::cout << "would you like to play again?" << "\t" << "Please enter 1 if you would like to play again, if not enter 0" << std::endl; // asks users if they want to play again
			while (!(std::cin >> playAgain)) // checks if players has input a number
			{
				std::cout << "an ERROR has occured, please enter a number" << std::endl;
				std::cin.clear();
				std::cin.ignore(256, '\n');
			}

			while (playAgain > 1) //checks if players has input a valid number
			{
				std::cout << "please enter a valid number" << std::endl;

				while (!(std::cin >> playAgain)) // checks if players has input a number
				{
					std::cout << "an ERROR has occured, please enter a number" << std::endl;
					std::cin.clear();
					std::cin.ignore(256, '\n');
				}
			}


			if (playAgain == 0)
			{
				end = true;
			}
			if (playAgain == 1)
			{
				end = false;
			}
		}
	} while (playAgain == false);
	
	std::cin.ignore();
	std::cin.get();
	return 0;
	
}