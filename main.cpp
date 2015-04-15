// Written by Brandon Holland
// 2-Player Game of Tic-Tac-Toe

#include <iostream>

using namespace std;

char one[7] = {' ',' ',' ',' ',' ',' ',' '};
char two[7] = {' ',' ',' ',' ',' ',' ',' '};
char three[7] = {' ',' ',' ',' ',' ',' ',' '};
char four[7] = {' ',' ',' ',' ',' ',' ',' '};
char five[7] = {' ',' ',' ',' ',' ',' ',' '};
char six[7] = {' ',' ',' ',' ',' ',' ',' '};

char game[9] = {' ',' ',' ',' ',' ',' ',' '};

bool complete = true;
bool end = true;

void draw_board()
{
	cout << "           | 1 | 2 | 3 | 4 | 5 | 6 | 7 |" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< one[0] <<" | " << one[1] <<" | " << one[2] << " | " << one[3] <<" | " << one[4] <<" | " << one[5] << " | " << one[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< two[0] <<" | " << two[1] <<" | " << two[2] << " | " << two[3] <<" | " << two[4] <<" | " << two[5] << " | " << two[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< three[0] <<" | " << three[1] <<" | " << three[2] << " | " << three[3] <<" | " << three[4] <<" | " << three[5] << " | " << three[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< four[0] <<" | " << four[1] <<" | " << four[2] << " | " << four[3] <<" | " << four[4] <<" | " << four[5] << " | " << four[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< five[0] <<" | " << five[1] <<" | " << five[2] << " | " << five[3] <<" | " << five[4] <<" | " << five[5] << " | " << five[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << "           |   |   |   |   |   |   |   |" << endl;
	cout << "           | "<< six[0] <<" | " << six[1] <<" | " << six[2] << " | " << six[3] <<" | " << six[4] <<" | " << six[5] << " | " << six[6] <<" | " <<  endl;
	cout << "           |___|___|___|___|___|___|___|" << endl;
	cout << endl;
}

void player_one(int sel)
{
	if(sel == 1)
	{
		if(six[0] != 'X' && six[0] != 'O')
			six[0] = 'X';
		else
		if(five[0] != 'X' && five[0] != 'O')
			five[0] = 'X';
		else
		if(four[0] != 'X' && four[0] != 'O')
			four[0] = 'X';
		else
		if(three[0] != 'X' && three[0] != 'O')
			three[0] = 'X';
		else
		if(two[0] != 'X' && two[0] != 'O')
			two[0] = 'X';
		else
		if(one[0] != 'X'&& one[0] != 'O')
			one[0] = 'X';
	}
	if(sel == 2)
	{
		if(six[1] != 'X' && six[1] != 'O')
			six[1] = 'X';
		else
		if(five[1] != 'X' && five[1] != 'O')
			five[1] = 'X';
		else
		if(four[1] != 'X' && four[1] != 'O')
			four[1] = 'X';
		else
		if(three[1] != 'X' && three[1] != 'O')
			three[1] = 'X';
		else
		if(two[1] != 'X' && two[1] != 'O')
			two[1] = 'X';
		else
		if(one[1] != 'X' && one[1] != 'O')
			one[1] = 'X';
	}
	if(sel == 3)
	{
		if(six[2] != 'X' && six[2] != 'O')
			six[2] = 'X';
		else
		if(five[2] != 'X' && five[2] != 'O')
			five[2] = 'X';
		else
		if(four[2] != 'X' && four[2] != 'O')
			four[2] = 'X';
		else
		if(three[2] != 'X' && three[2] != 'O')
			three[2] = 'X';
		else
		if(two[2] != 'X' && two[2] != 'O')
			two[2] = 'X';
		else
		if(one[2] != 'X' && one[2] != 'O')
			one[2] = 'X';
	}
	if(sel == 4)
	{
		if(six[3] != 'X' && six[3] != 'O')
			six[3] = 'X';
		else
		if(five[3] != 'X' && five[3] != 'O')
			five[3] = 'X';
		else
		if(four[3] != 'X' && four[3] != 'O')
			four[3] = 'X';
		else
		if(three[3] != 'X' && three[3] != 'O')
			three[3] = 'X';
		else
		if(two[3] != 'X' && two[3] != 'O')
			two[3] = 'X';
		else
		if(one[3] != 'X' && one[3] != 'O')
			one[3] = 'X';
	}
	if(sel == 5)
	{
		if(six[4] != 'X' && six[4] != 'O')
			six[4] = 'X';
		else
		if(five[4] != 'X' && five[4] != 'O')
			five[4] = 'X';
		else
		if(four[4] != 'X' && four[4] != 'O')
			four[4] = 'X';
		else
		if(three[4] != 'X' && three[4] != 'O')
			three[4] = 'X';
		else
		if(two[4] != 'X' && two[4] != 'O')
			two[4] = 'X';
		else
		if(one[4] != 'X' && one[4] != 'O')
			one[4] = 'X';
	}
	if(sel == 6)
	{
		if(six[5] != 'X' && six[5] != 'O')
			six[5] = 'X';
		else
		if(five[5] != 'X' && five[5] != 'O')
			five[5] = 'X';
		else
		if(four[5] != 'X' && four[5] != 'O')
			four[5] = 'X';
		else
		if(three[5] != 'X' && three[5] != 'O')
			three[5] = 'X';
		else
		if(two[5] != 'X' && two[5] != 'O')
			two[5] = 'X';
		else
		if(one[5] != 'X' && one[5] != 'O')
			one[5] = 'X';
	}
	if(sel == 7)
	{
		if(six[6] != 'X' && six[6] != 'O')
			six[6] = 'X';
		else
		if(five[6] != 'X' && five[6] != 'O')
			five[6] = 'X';
		else
		if(four[6] != 'X' && four[6] != 'O')
			four[6] = 'X';
		else
		if(three[6] != 'X' && three[6] != 'O')
			three[6] = 'X';
		else
		if(two[6] != 'X' && two[6] != 'O')
			two[6] = 'X';
		else
		if(one[6] != 'X' && one[6] != 'O')
			one[6] = 'X';
	}
}

void player_two(int sel)
{
	if(sel == 1)
	{
		if(six[0] != 'X' && six[0] != 'O')
			six[0] = 'O';
		else
		if(five[0] != 'X' && five[0] != 'O')
			five[0] = 'O';
		else
		if(four[0] != 'X' && four[0] != 'O')
			four[0] = 'O';
		else
		if(three[0] != 'X' && three[0] != 'O')
			three[0] = 'O';
		else
		if(two[0] != 'X' && two[0] != 'O')
			two[0] = 'O';
		else
		if(one[0] != 'X' && one[0] != 'O')
			one[0] = 'O';
	}
	if(sel == 2)
	{
		if(six[1] != 'X' && six[1] != 'O')
			six[1] = 'O';
		else
		if(five[1] != 'X' && five[1] != 'O')
			five[1] = 'O';
		else
		if(four[1] != 'X' && four[1] != 'O')
			four[1] = 'O';
		else
		if(three[1] != 'X' && three[1] != 'O')
			three[1] = 'O';
		else
		if(two[1] != 'X' && two[1] != 'O')
			two[1] = 'O';
		else
		if(one[1] != 'X' && one[1] != 'O')
			one[1] = 'O';
	}
	if(sel == 3)
	{
		if(six[2] != 'X' && six[2] != 'O')
			six[2] = 'O';
		else
		if(five[2] != 'X' && five[2] != 'O')
			five[2] = 'O';
		else
		if(four[2] != 'X' && four[2] != 'O')
			four[2] = 'O';
		else
		if(three[2] != 'X' && three[2] != 'O')
			three[2] = 'O';
		else
		if(two[2] != 'X' && two[2] != 'O')
			two[2] = 'O';
		else
		if(one[2] != 'X' && one[2] != 'O')
			one[2] = 'O';
	}
	if(sel == 4)
	{
		if(six[3] != 'X' && six[3] != 'O')
			six[3] = 'O';
		else
		if(five[3] != 'X' && five[3] != 'O')
			five[3] = 'O';
		else
		if(four[3] != 'X' && four[3] != 'O')
			four[3] = 'O';
		else
		if(three[3] != 'X' && three[3] != 'O')
			three[3] = 'O';
		else
		if(two[3] != 'X' && two[3] != 'O')
			two[3] = 'O';
		else
		if(one[3] != 'X' && one[3] != 'O')
			one[3] = 'O';
	}
	if(sel == 5)
	{
		if(six[4] != 'X' && six[4] != 'O')
			six[4] = 'O';
		else
		if(five[4] != 'X' && five[4] != 'O')
			five[4] = 'O';
		else
		if(four[4] != 'X' && four[4] != 'O')
			four[4] = 'O';
		else
		if(three[4] != 'X' && three[4] != 'O')
			three[4] = 'O';
		else
		if(two[4] != 'X' && two[4] != 'O')
			two[4] = 'O';
		else
		if(one[4] != 'X' && one[4] != 'O')
			one[4] = 'O';
	}
	if(sel == 6)
	{
		if(six[5] != 'X' && six[5] != 'O')
			six[5] = 'O';
		else
		if(five[5] != 'X' && five[5] != 'O')
			five[5] = 'O';
		else
		if(four[5] != 'X' && four[5] != 'O')
			four[5] = 'O';
		else
		if(three[5] != 'X' && three[5] != 'O')
			three[5] = 'O';
		else
		if(two[5] != 'X' && two[5] != 'O')
			two[5] = 'O';
		else
		if(one[5] != 'X' && one[5] != 'O')
			one[5] = 'O';
	}
	if(sel == 7)
	{
		if(six[6] != 'X' && six[6] != 'O')
			six[6] = 'O';
		else
		if(five[6] != 'X' && five[6] != 'O')
			five[6] = 'O';
		else
		if(four[6] != 'X' && four[6] != 'O')
			four[6] = 'O';
		else
		if(three[6] != 'X' && three[6] != 'O')
			three[6] = 'O';
		else
		if(two[6] != 'X' && two[6] != 'O')
			two[6] = 'O';
		else
		if(one[6] != 'X' && one[6] != 'O')
			one[6] = 'O';
	}
}

void test_win()
{
	if(one[0] == 'X' && one[1] == 'X' && one[2] == 'X' && one[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'X' && one[2] == 'X' && one[3] == 'X' && one[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'X' && one[2] == 'X' && one[3] == 'X' && one[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'X' && one[2] == 'X' && one[3] == 'X' && one[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[0] == 'X' && two[1] == 'X' && two[2] == 'X' && two[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'X' && two[2] == 'X' && two[3] == 'X' && two[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[5] == 'X' && two[2] == 'X' && two[3] == 'X' && two[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[6] == 'X' && two[2] == 'X' && two[3] == 'X' && two[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[0] == 'X' && three[1] == 'X' && three[2] == 'X' && three[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'X' && three[2] == 'X' && three[3] == 'X' && three[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[5] == 'X' && three[2] == 'X' && three[3] == 'X' && three[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[6] == 'X' && three[2] == 'X' && three[3] == 'X' && three[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[0] == 'X' && four[1] == 'X' && four[2] == 'X' && four[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[1] == 'X' && four[2] == 'X' && four[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[5] == 'X' && four[2] == 'X' && four[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[6] == 'X' && four[2] == 'X' && four[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'X' && five[1] == 'X' && five[2] == 'X' && five[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'X' && five[2] == 'X' && five[3] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'X' && five[2] == 'X' && five[3] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'X' && five[2] == 'X' && five[3] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[0] == 'X' && six[1] == 'X' && six[2] == 'X' && six[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[1] == 'X' && six[2] == 'X' && six[3] == 'X' && six[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[5] == 'X' && six[2] == 'X' && six[3] == 'X' && six[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[6] == 'X' && six[2] == 'X' && six[3] == 'X' && six[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////// Player 1 Vertical
	if(one[0] == 'X' && two[0] == 'X' && three[0] == 'X' && four[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'X' && two[0] == 'X' && three[0] == 'X' && four[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'X' && six[0] == 'X' && three[0] == 'X' && four[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'X' && two[1] == 'X' && three[1] == 'X' && four[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'X' && two[1] == 'X' && three[1] == 'X' && four[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'X' && six[1] == 'X' && three[1] == 'X' && four[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[2] == 'X' && two[2] == 'X' && three[2] == 'X' && four[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[2] == 'X' && two[2] == 'X' && three[2] == 'X' && four[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[2] == 'X' && six[2] == 'X' && three[2] == 'X' && four[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[3] == 'X' && two[3] == 'X' && three[3] == 'X' && four[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[3] == 'X' && two[3] == 'X' && three[3] == 'X' && four[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[3] == 'X' && six[3] == 'X' && three[3] == 'X' && four[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[4] == 'X' && two[4] == 'X' && three[4] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[4] == 'X' && two[4] == 'X' && three[4] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[4] == 'X' && six[4] == 'X' && three[4] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'X' && two[5] == 'X' && three[5] == 'X' && four[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'X' && two[5] == 'X' && three[5] == 'X' && four[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'X' && six[5] == 'X' && three[5] == 'X' && four[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'X' && two[6] == 'X' && three[6] == 'X' && four[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'X' && two[6] == 'X' && three[6] == 'X' && four[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'X' && six[6] == 'X' && three[6] == 'X' && four[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
/////////////////////////////////////////////////////////////////////////////////////////////////////// Player 1 Diaganol
	if(one[3] == 'X' && two[2] == 'X' && three[1] == 'X' && four[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[4] == 'X' && two[3] == 'X' && three[2] == 'X' && four[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[3] == 'X' && three[2] == 'X' && four[1] == 'X' && five[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'X' && two[4] == 'X' && three[3] == 'X' && four[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[4] == 'X' && three[3] == 'X' && four[2] == 'X' && five[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[3] == 'X' && four[2] == 'X' && five[1] == 'X' && six[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'X' && two[5] == 'X' && three[4] == 'X' && four[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[5] == 'X' && three[4] == 'X' && four[3] == 'X' && five[2] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[4] == 'X' && four[3] == 'X' && five[2] == 'X' && six[1] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[6] == 'X' && three[5] == 'X' && four[4] == 'X' && five[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[2] == 'X' && three[5] == 'X' && four[4] == 'X' && five[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[3] == 'X' && three[6] == 'X' && four[5] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
////////////
	if(three[0] == 'X' && four[1] == 'X' && five[2] == 'X' && six[3] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'X' && four[2] == 'X' && five[3] == 'X' && two[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'X' && four[2] == 'X' && five[3] == 'X' && six[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'X' && three[2] == 'X' && four[3] == 'X' && one[0] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'X' && three[2] == 'X' && four[3] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[5] == 'X' && three[2] == 'X' && four[3] == 'X' && five[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'X' && two[2] == 'X' && three[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'X' && two[2] == 'X' && three[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'X' && six[6] == 'X' && three[3] == 'X' && four[4] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'X' && two[3] == 'X' && three[4] == 'X' && four[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[2] == 'X' && two[3] == 'X' && three[4] == 'X' && four[5] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[3] == 'X' && two[4] == 'X' && three[5] == 'X' && four[6] == 'X')
	{
		cout << endl;
		cout << "PLAYER 1 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}

///////////////////////////////////////////////////////////////////////////////////////////////////////Player 2 Horizontal
	if(one[0] == 'O' && one[1] == 'O' && one[2] == 'O' && one[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'O' && one[2] == 'O' && one[3] == 'O' && one[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'O' && one[2] == 'O' && one[3] == 'O' && one[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'O' && one[2] == 'O' && one[3] == 'O' && one[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[0] == 'O' && two[1] == 'O' && two[2] == 'O' && two[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'O' && two[2] == 'O' && two[3] == 'O' && two[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[5] == 'O' && two[2] == 'O' && two[3] == 'O' && two[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[6] == 'O' && two[2] == 'O' && two[3] == 'O' && two[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[0] == 'O' && three[1] == 'O' && three[2] == 'O' && three[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'O' && three[2] == 'O' && three[3] == 'O' && three[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[5] == 'O' && three[2] == 'O' && three[3] == 'O' && three[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[6] == 'O' && three[2] == 'O' && three[3] == 'O' && three[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[0] == 'O' && four[1] == 'O' && four[2] == 'O' && four[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[1] == 'O' && four[2] == 'O' && four[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[5] == 'O' && four[2] == 'O' && four[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(four[6] == 'O' && four[2] == 'O' && four[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'O' && five[1] == 'O' && five[2] == 'O' && five[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'O' && five[2] == 'O' && five[3] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'O' && five[2] == 'O' && five[3] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'O' && five[2] == 'O' && five[3] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[0] == 'O' && six[1] == 'O' && six[2] == 'O' && six[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[1] == 'O' && six[2] == 'O' && six[3] == 'O' && six[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[5] == 'O' && six[2] == 'O' && six[3] == 'O' && six[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[6] == 'O' && six[2] == 'O' && six[3] == 'O' && six[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////// Player 2 Vertical
	if(one[0] == 'O' && two[0] == 'O' && three[0] == 'O' && four[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'O' && two[0] == 'O' && three[0] == 'O' && four[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[0] == 'O' && six[0] == 'O' && three[0] == 'O' && four[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'O' && two[1] == 'O' && three[1] == 'O' && four[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'O' && two[1] == 'O' && three[1] == 'O' && four[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[1] == 'O' && six[1] == 'O' && three[1] == 'O' && four[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[2] == 'O' && two[2] == 'O' && three[2] == 'O' && four[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[2] == 'O' && two[2] == 'O' && three[2] == 'O' && four[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[2] == 'O' && six[2] == 'O' && three[2] == 'O' && four[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[3] == 'O' && two[3] == 'O' && three[3] == 'O' && four[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[3] == 'O' && two[3] == 'O' && three[3] == 'O' && four[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[3] == 'O' && six[3] == 'O' && three[3] == 'O' && four[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[4] == 'O' && two[4] == 'O' && three[4] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[4] == 'O' && two[4] == 'O' && three[4] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[4] == 'O' && six[4] == 'O' && three[4] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'O' && two[5] == 'O' && three[5] == 'O' && four[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'O' && two[5] == 'O' && three[5] == 'O' && four[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'O' && six[5] == 'O' && three[5] == 'O' && four[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'O' && two[6] == 'O' && three[6] == 'O' && four[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'O' && two[6] == 'O' && three[6] == 'O' && four[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'O' && six[6] == 'O' && three[6] == 'O' && four[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////// Player 2 Diaganol
	if(one[3] == 'O' && two[2] == 'O' && three[1] == 'O' && four[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[4] == 'O' && two[3] == 'O' && three[2] == 'O' && four[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[3] == 'O' && three[2] == 'O' && four[1] == 'O' && five[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[5] == 'O' && two[4] == 'O' && three[3] == 'O' && four[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[4] == 'O' && three[3] == 'O' && four[2] == 'O' && five[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[3] == 'O' && four[2] == 'O' && five[1] == 'O' && six[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[6] == 'O' && two[5] == 'O' && three[4] == 'O' && four[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[5] == 'O' && three[4] == 'O' && four[3] == 'O' && five[2] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[4] == 'O' && four[3] == 'O' && five[2] == 'O' && six[1] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[6] == 'O' && three[5] == 'O' && four[4] == 'O' && five[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[2] == 'O' && three[5] == 'O' && four[4] == 'O' && five[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[3] == 'O' && three[6] == 'O' && four[5] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
////////////
	if(three[0] == 'O' && four[1] == 'O' && five[2] == 'O' && six[3] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'O' && four[2] == 'O' && five[3] == 'O' && two[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(three[1] == 'O' && four[2] == 'O' && five[3] == 'O' && six[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'O' && three[2] == 'O' && four[3] == 'O' && one[0] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(two[1] == 'O' && three[2] == 'O' && four[3] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(six[5] == 'O' && three[2] == 'O' && four[3] == 'O' && five[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[1] == 'O' && two[2] == 'O' && three[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'O' && two[2] == 'O' && three[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[5] == 'O' && six[6] == 'O' && three[3] == 'O' && four[4] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(five[6] == 'O' && two[3] == 'O' && three[4] == 'O' && four[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[2] == 'O' && two[3] == 'O' && three[4] == 'O' && four[5] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
	if(one[3] == 'O' && two[4] == 'O' && three[5] == 'O' && four[6] == 'O')
	{
		cout << endl;
		cout << "PLAYER 2 WINS!" << endl;
		cout << endl;
		complete = false;
		end = false;
	}
}

void check_tie()
{
	if(one[0] != ' ' && one[1] != ' ' && one[2] != ' ' && one[3] != ' ' && one[4] != ' ' && one[5] != ' ' && one[6] != ' ')
	{
		if(two[0] != ' ' && two[1] != ' ' && two[2] != ' ' && two[3] != ' ' && two[4] != ' ' && two[5] != ' ' && two[6] != ' ')
		{
			if(three[0] != ' ' && three[1] != ' ' && three[2] != ' ' && three[3] != ' ' && three[4] != ' ' && three[5] != ' ' && three[6] != ' ')
			{
				if(four[0] != ' ' && four[1] != ' ' && four[2] != ' ' && four[3] != ' ' && four[4] != ' ' && four[5] != ' ' && four[6] != ' ')
				{
					if(five[0] != ' ' && five[1] != ' ' && five[2] != ' ' && five[3] != ' ' && five[4] != ' ' && five[5] != ' ' && five[6] != ' ')
					{
						if(six[0] != ' ' && six[1] != ' ' && six[2] != ' ' && six[3] != ' ' && six[4] != ' ' && six[5] != ' ' && six[6] != ' ')
						{
							end = false;
							cout << "IT'S A TIE!" << endl;
						}
					}
				}
			}
		}
	}
}

int main()
{
	cout << endl;
	cout << endl;
	cout << "                   CONNECT FOUR" << endl;
	cout << endl;
	cout << "             WRITTEN BY: BRANDON HOLLAND" << endl;

	cout << endl;
	cout << endl;

	cout << "                 Player 1: You are X" << endl;
	cout << "                 Player 2: You are O" << endl;
	cout << endl;

	draw_board();

	int in;

	cout << "Player 1, Choose a Row!" << endl;
	cin >> in;

	player_one(in);

	draw_board();

	cout << "Player 2, Choose a Row!" << endl;
	cin >> in;

	player_two(in);

	draw_board();

	cout << "Player 1, Choose a Row!" << endl;
	cin >> in;

	player_one(in);

	draw_board();

	cout << "Player 2, Choose a Row!" << endl;
	cin >> in;

	player_two(in);

	draw_board();

	cout << "Player 1, Choose a Row!" << endl;
	cin >> in;

	player_one(in);

	draw_board();

	cout << "Player 2, Choose a Row!" << endl;
	cin >> in;

	player_two(in);

	draw_board();

	cout << "Player 1, Choose a Row!" << endl;
	cin >> in;

	player_one(in);

	draw_board();

	test_win();

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 17
	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////35
	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////42
	check_tie();

	if(complete && end)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}
	if(complete && end)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 1, Choose a Row!" << endl;
		cin >> in;

		player_one(in);

		draw_board();

		test_win();
	}

	if(complete && end)
	{
		cout << "Player 2, Choose a Row!" << endl;
		cin >> in;

		player_two(in);

		draw_board();

		test_win();
	}

	if(end)
	{
		cout << "Ran out of turns!  Try again!" << endl;
	}

	return 0;
}