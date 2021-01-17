#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

char square[10] = { '0','1','2','3','4','5','6','7','8','9' };

int checkwin();
void board();


int main()
{
	int gameselect;
	std::cout << R"( __          __         _                                       _______         
 \ \        / /        | |                                     |__   __|        
  \ \  /\  / /    ___  | |   ___    ___    _ __ ___     ___       | |      ___  
   \ \/  \/ /    / _ \ | |  / __|  / _ \  | '_ ` _ \   / _ \      | |     / _ \ 
    \  /\  /    |  __/ | | | (__  | (_) | | | | | | | |  __/      | |    | (_) |
     \/  \/      \___| |_|  \___|  \___/  |_| |_| |_|  \___|      |_|     \___/ 
      ___                       ___                    ___           ___           ___                    ___           ___           ___     
     /\  \          ___        /\  \                  /\  \         /\  \         /\  \                  /\  \         /\  \         /\  \    
     \:\  \        /\  \      /::\  \                 \:\  \       /::\  \       /::\  \                 \:\  \       /::\  \       /::\  \   
      \:\  \       \:\  \    /:/\:\  \                 \:\  \     /:/\:\  \     /:/\:\  \                 \:\  \     /:/\:\  \     /:/\:\  \  
      /::\  \      /::\__\  /:/  \:\  \                /::\  \   /::\~\:\  \   /:/  \:\  \                /::\  \   /:/  \:\  \   /::\~\:\  \ 
     /:/\:\__\  __/:/\/__/ /:/__/ \:\__\              /:/\:\__\ /:/\:\ \:\__\ /:/__/ \:\__\              /:/\:\__\ /:/__/ \:\__\ /:/\:\ \:\__\
    /:/  \/__/ /\/:/  /    \:\  \  \/__/             /:/  \/__/ \/__\:\/:/  / \:\  \  \/__/             /:/  \/__/ \:\  \ /:/  / \:\~\:\ \/__/
   /:/  /      \::/__/      \:\  \                  /:/  /           \::/  /   \:\  \                  /:/  /       \:\  /:/  /   \:\ \:\__\  
   \/__/        \:\__\       \:\  \                 \/__/            /:/  /     \:\  \                 \/__/         \:\/:/  /     \:\ \/__/  
                 \/__/        \:\__\                                /:/  /       \:\__\                               \::/  /       \:\__\    
                               \/__/                                \/__/         \/__/                                \/__/         \/__/    )" << '\n';
	//	cout << "To play with another player Type 1\n";
	std::cout << R"( _____              _                        _ _   _                         _   _                       _                         _____                    _ 
/__   \___    _ __ | | __ _ _   _  __      _(_| |_| |__     __ _ _ __   ___ | |_| |__   ___ _ __   _ __ | | __ _ _   _  ___ _ __  /__   \_   _ _ __   ___  / |
  / /\/ _ \  | '_ \| |/ _` | | | | \ \ /\ / | | __| '_ \   / _` | '_ \ / _ \| __| '_ \ / _ | '__| | '_ \| |/ _` | | | |/ _ | '__|   / /\| | | | '_ \ / _ \ | |
 / / | (_) | | |_) | | (_| | |_| |  \ V  V /| | |_| | | | | (_| | | | | (_) | |_| | | |  __| |    | |_) | | (_| | |_| |  __| |     / /  | |_| | |_) |  __/ | |
 \/   \___/  | .__/|_|\__,_|\__, |   \_/\_/ |_|\__|_| |_|  \__,_|_| |_|\___/ \__|_| |_|\___|_|    | .__/|_|\__,_|\__, |\___|_|     \/    \__, | .__/ \___| |_|
             |_|            |___/                                                                 |_|            |___/                   |___/|_|             
 _____                 _                                      _              _                                           _                 _____                       ____  
/__   \  ___    _ __  | |  __ _  _   _    __ _   __ _   __ _ (_) _ __   ___ | |_    ___   ___   _ __ ___   _ __   _   _ | |_   ___  _ __  /__   \ _   _  _ __    ___  |___ \ 
  / /\/ / _ \  | '_ \ | | / _` || | | |  / _` | / _` | / _` || || '_ \ / __|| __|  / __| / _ \ | '_ ` _ \ | '_ \ | | | || __| / _ \| '__|   / /\/| | | || '_ \  / _ \   __) |
 / /   | (_) | | |_) || || (_| || |_| | | (_| || (_| || (_| || || | | |\__ \| |_  | (__ | (_) || | | | | || |_) || |_| || |_ |  __/| |     / /   | |_| || |_) ||  __/  / __/ 
 \/     \___/  | .__/ |_| \__,_| \__, |  \__,_| \__, | \__,_||_||_| |_||___/ \__|  \___| \___/ |_| |_| |_|| .__/  \__,_| \__| \___||_|     \/     \__, || .__/  \___| |_____|
               |_|               |___/          |___/                                                     |_|                                     |___/ |_|                  )" << '\n';
	//	cout << "To play with against computer Type 2\n";

	cin >> gameselect;
	if (gameselect == 1)
	{
		int player = 1, i, choice;

		char mark;
		do
		{
			board();
			player = (player % 2) ? 1 : 2;

			cout << "Player " << player << ", enter a number:  ";
			cin >> choice;

			mark = (player == 1) ? 'X' : 'O';

			if (choice == 1 && square[1] == '1')

				square[1] = mark;
			else if (choice == 2 && square[2] == '2')

				square[2] = mark;
			else if (choice == 3 && square[3] == '3')

				square[3] = mark;
			else if (choice == 4 && square[4] == '4')

				square[4] = mark;
			else if (choice == 5 && square[5] == '5')

				square[5] = mark;
			else if (choice == 6 && square[6] == '6')

				square[6] = mark;
			else if (choice == 7 && square[7] == '7')

				square[7] = mark;
			else if (choice == 8 && square[8] == '8')

				square[8] = mark;
			else if (choice == 9 && square[9] == '9')

				square[9] = mark;
			else
			{
				cout << "Invalid move ";

				player--;
				cin.ignore();
				cin.get();
			}
			i = checkwin();

			player++;
		} while (i == -1);
		board();
		if (i == 1)

			cout << "==>\aPlayer " << --player << " win ";
		else
			cout << "==>\aGame draw";

		cin.ignore();
		cin.get();
		return 0;
	}
	else if (gameselect == 2)
	{
		system("cls");
		std::cout << R"(
  ____     ____   U _____ u____   ____            _         _____  U  ___ u  ____        U _____ u   _     ____     __   __      __  __   U  ___ u ____ U _____ u 
U|  _"\ U |  _"\ u\| ___"|/ __"| / __"| u        /"|       |" ___|  \/"_ \U |  _"\ u     \| ___"|U  /"\  u/ __"| u  \ \ / /    U|' \/ '|u  \/"_ \/|  _"\\| ___"|/ 
\| |_) |/\| |_) |/ |  _|"<\___ \<\___ \/       u | |u     U| |_  u  | | | |\| |_) |/      |  _|"  \/ _ \/<\___ \/    \ V /     \| |\/| |/  | | | /| | | ||  _|"   
 |  __/   |  _ <   | |___ u___) |u___) |        \| |/     \|  _|.-,_| |_| | |  _ <        | |___  / ___ \ u___) |   U_|"|_u     | |  | .-,_| |_| U| |_| || |___   
 |_|      |_| \_\  |_____||____/>|____/>>        |_|       |_|   \_)-\___/  |_| \_\       |_____|/_/   \_\|____/>>    |_|       |_|  |_|\_)-\___/ |____/ |_____|  
 ||>>_    //   \\_ <<   >> )(  (__)(  (__)     _//<,-,     )(\\,-     \\    //   \\_      <<   >> \\    >> )(  (__.-,//|(_     <<,-,,-.      \\    |||_  <<   >>  
(__)__)  (__)  (__(__) (__(__)   (__)         (__)(_/     (__)(_/    (__)  (__)  (__)    (__) (__(__)  (__(__)     \_) (__)     (./  \.)    (__)  (__)_)(__) (__) 

  ____     ____   U _____ u____   ____          ____         _____  U  ___ u  ____          _   _     _      ____    ____         __  __   U  ___ u ____ U _____ u 
U|  _"\ U |  _"\ u\| ___"|/ __"| / __"| u      |___"\       |" ___|  \/"_ \U |  _"\ u      |'| |'|U  /"\  U |  _"\ u|  _"\      U|' \/ '|u  \/"_ \/|  _"\\| ___"|/ 
\| |_) |/\| |_) |/ |  _|"<\___ \<\___ \/       U __) |     U| |_  u  | | | |\| |_) |/     /| |_| |\\/ _ \/ \| |_) |/| | | |     \| |\/| |/  | | | /| | | ||  _|"   
 |  __/   |  _ <   | |___ u___) |u___) |       \/ __/ \    \|  _|.-,_| |_| | |  _ <       U|  _  |u/ ___ \  |  _ < U| |_| |\     | |  | .-,_| |_| U| |_| || |___   
 |_|      |_| \_\  |_____||____/>|____/>>      |_____|u     |_|   \_)-\___/  |_| \_\       |_| |_|/_/   \_\ |_| \_\ |____/ u     |_|  |_|\_)-\___/ |____/ |_____|  
 ||>>_    //   \\_ <<   >> )(  (__)(  (__)     <<  //       )(\\,-     \\    //   \\_      //   \\ \\    >> //   \\_ |||_       <<,-,,-.      \\    |||_  <<   >>  
(__)__)  (__)  (__(__) (__(__)   (__)         (__)(__)     (__)(_/    (__)  (__)  (__)    (_") ("_(__)  (__(__)  (__(__)_)       (./  \.)    (__)  (__)_)(__) (__) 
 
)" << '\n';
		int diffuclt;
		cin >> diffuclt;
		if (diffuclt == 1)
		{
			int player = 1, i, choice;
			char mark;
			do
			{
				board();

				if (player % 2 == 1)
					player = 1;
				else
					player = 2;


				// player 2
				if (player == 2)
				{
					cout << "Players  " << player << endl;
					cout << "Press Enter for CPU" << endl;
					choice = rand() % 9;
					mark = 'O';
					int turn = 1;
					int placed = 0;
					while (placed == 0)
					{

						if (choice == 1 && square[1] == '1') {
							square[1] = mark;
							placed = 1;
						}
						else if (choice == 2 && square[2] == '2') {

							square[2] = mark;
							placed = 1;
						}
						else if (choice == 3 && square[3] == '3') {

							square[3] = mark;
							placed = 1;
						}
						else if (choice == 4 && square[4] == '4') {

							placed = 1;
							square[4] = mark;
						}
						else if (choice == 5 && square[5] == '5') {

							square[5] = mark;
							placed = 1;
						}
						else if (choice == 6 && square[6] == '6') {

							square[6] = mark;
							placed = 1;
						}
						else if (choice == 7 && square[7] == '7') {

							square[7] = mark;
							placed = 1;
						}
						else if (choice == 8 && square[8] == '8') {

							square[8] = mark;
							placed = 1;
						}
						else if (choice == 9 && square[9] == '9') {

							square[9] = mark;
							placed = 1;
						}

						else
						{
							choice = rand() % 9;
						}
					}
					i = checkwin();
					player++;
					board();
				}

				// player 1
				else if (player == 1)
				{
					cout << "Players  " << player << ", enter a number:  ";
					cin >> choice;
					mark = 'X';

					if (choice == 1 && square[1] == '1' && square[1] != 'O')

						square[1] = mark;
					else if (choice == 2 && square[2] == '2' && square[2] != 'O')

						square[2] = mark;
					else if (choice == 3 && square[3] == '3' && square[3] != 'O')

						square[3] = mark;
					else if (choice == 4 && square[4] == '4' && square[4] != 'O')

						square[4] = mark;
					else if (choice == 5 && square[5] == '5' && square[5] != 'O')

						square[5] = mark;
					else if (choice == 6 && square[6] == '6' && square[6] != 'O')

						square[6] = mark;
					else if (choice == 7 && square[7] == '7' && square[7] != 'O')

						square[7] = mark;
					else if (choice == 8 && square[8] == '8' && square[8] != 'O')

						square[8] = mark;
					else if (choice == 9 && square[9] == '9' && square[9] != 'O')

						square[9] = mark;
					else
					{
						cout << "Invalid move ";

						player--;
					}
					i = checkwin();

					player++;
				}
			} while (i == -1);
			board();
			if (i == 1)

				cout << "Congratulation! \nPlayer " << --player << " win ";
			else
				cout << "  OOps!\nGame draw";

		}
		else if (diffuclt == 2) {
			int player = 1, i, choice;
			char mark;
			do
			{
				board();

				if (player % 2 == 1)
					player = 1;
				else
					player = 2;


				// player 2
				if (player == 2)
				{
					cout << "Players  " << player << endl;
					cout << "Press Enter for CPU" << endl;
					mark = 'O';
					int placed = 0;
					choice = rand() % 9;
					cout << choice << endl;
					while (placed == 0)

					{
						if (square[1] == '1' && square[2] == 'X' && square[3] == 'X' ||
							square[1] == '1' && square[4] == 'X' && square[7] == 'X' ||
							square[1] == '1' && square[5] == 'X' && square[9] == 'X')
						{
							square[1] = mark;
							placed = 1;
						}

						else if (square[2] == '2' && square[5] == 'X' && square[8] == 'X' ||
							square[2] == '2' && square[1] == 'X' && square[3] == 'X')
						{
							square[2] = mark;
							placed = 1;
						}

						else if (square[3] == '3' && square[6] == 'X' && square[9] == 'X' ||
							square[3] == '3' && square[5] == 'X' && square[7] == 'X' ||
							square[3] == '3' && square[1] == 'X' && square[2] == 'X')
						{

							square[3] = mark;
							placed = 1;
						}


						else if (square[4] == '4' && square[5] == 'X' && square[6] == 'X' ||
							square[4] == '4' && square[1] == 'X' && square[7] == 'X')
						{

							square[4] = mark;
							placed = 1;
						}


						else if (square[5] == '5' && square[2] == 'X' && square[8] == 'X' ||
							square[5] == '5' && square[3] == 'X' && square[7] == 'X' ||
							square[5] == '5' && square[1] == 'X' && square[9] == 'X' ||
							square[5] == '5' && square[4] == 'X' && square[6] == 'X')
						{

							square[5] = mark;
							placed = 1;
						}

						else if (square[6] == '6' && square[3] == 'X' && square[9] == 'X' ||
							square[6] == '6' && square[5] == 'X' && square[4] == 'X')
						{

							square[6] = mark;
							placed = 1;
						}


						else if (square[7] == '7' && square[4] == 'X' && square[1] == 'X' ||
							square[7] == '7' && square[5] == 'X' && square[3] == 'X' ||
							square[7] == '7' && square[8] == 'X' && square[9] == 'X')
						{

							square[7] = mark;
							placed = 1;
						}

						else if (square[8] == '8' && square[5] == 'X' && square[2] == 'X' ||
							square[8] == '8' && square[7] == 'X' && square[9] == 'X')
						{
							square[8] = mark;
							placed = 1;
						}

						else if (square[9] == '9' && square[5] == 'X' && square[1] == 'X' ||
							square[9] == '9' && square[6] == 'X' && square[3] == 'X' ||
							square[9] == '9' && square[8] == 'X' && square[7] == 'X')
						{

							square[9] = mark;
							placed = 1;
						}

						else if (choice == 1 && square[1] == '1') {
							square[1] = mark;
							placed = 1;
						}
						else if (choice == 2 && square[2] == '2') {

							square[2] = mark;
							placed = 1;
						}
						else if (choice == 3 && square[3] == '3') {

							square[3] = mark;
							placed = 1;
						}
						else if (choice == 4 && square[4] == '4') {

							placed = 1;
							square[4] = mark;
						}
						else if (choice == 5 && square[5] == '5') {

							square[5] = mark;
							placed = 1;
						}
						else if (choice == 6 && square[6] == '6') {

							square[6] = mark;
							placed = 1;
						}
						else if (choice == 7 && square[7] == '7') {

							square[7] = mark;
							placed = 1;
						}
						else if (choice == 8 && square[8] == '8') {

							square[8] = mark;
							placed = 1;
						}
						else if (choice == 9 && square[9] == '9') {

							square[9] = mark;
							placed = 1;
						}

						else
						{
							choice = rand() % 9;
						}

					}

					i = checkwin();
					player++;
					board();
				}

				// player 1
				else if (player == 1)
				{
					cout << "Players  " << player << ", enter a number:  ";
					cin >> choice;
					mark = 'X';

					if (choice == 1 && square[1] == '1' && square[1] != 'O')

						square[1] = mark;
					else if (choice == 2 && square[2] == '2' && square[2] != 'O')

						square[2] = mark;
					else if (choice == 3 && square[3] == '3' && square[3] != 'O')

						square[3] = mark;
					else if (choice == 4 && square[4] == '4' && square[4] != 'O')

						square[4] = mark;
					else if (choice == 5 && square[5] == '5' && square[5] != 'O')

						square[5] = mark;
					else if (choice == 6 && square[6] == '6' && square[6] != 'O')

						square[6] = mark;
					else if (choice == 7 && square[7] == '7' && square[7] != 'O')

						square[7] = mark;
					else if (choice == 8 && square[8] == '8' && square[8] != 'O')

						square[8] = mark;
					else if (choice == 9 && square[9] == '9' && square[9] != 'O')

						square[9] = mark;
					else
					{
						cout << "Invalid move ";

						player--;
					}
					i = checkwin();

					player++;
				}
			} while (i == -1);
			board();
			if (i == 1)

				cout << "Congratulation! \nPlayer " << --player << " win ";
			else
				cout << "  OOps!\nGame draw";
		}

	}
		return 0;
}




int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
		&& square[4] != '4' && square[5] != '5' && square[6] != '6'
		&& square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	else
		return -1;
}


/*******************************************************************
	 FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
}

/*******************************************************************
				END OF PROJECT
********************************************************************/
