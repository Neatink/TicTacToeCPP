#include <iostream>

using namespace std;

char table[3][3] = {
	'#','#','#',
	'#','#','#',
	'#','#','#'
};

struct Player{
	string name;
	char symbol;
};

void createPlayer(Player &player, const int number) {
	cout << "Player " << number << " name: ";
	cin >> player.name;
	cout << "Player " << number << " symbol: ";
	cin >> player.symbol;

	cout << "Player " << number << '(' << player.name << ')' << " created!\n";
}

void outGameTable(char (&table)[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}

bool checkPlayerMove(char (&table)[3][3], int column, int row) {
	if (table[column][row] == '#') {
		return true;
	}
	else {
		return false;
	}
}

bool playerMove(Player &player) {
	int column, row, sum;
	cout << "Player " << player.name << ", enter column and row(example: 1 3): ";
	cin >> column >> row;
	sum = column + row;
	column -= 1; row -= 1;
	if ((sum >= 2) && (sum <= 6)) {
		if (checkPlayerMove(table, column, row)) {
			table[column][row] = player.symbol;
			outGameTable(table);
		}
		else {
			cout << "This cell is occupied!\nTry again!\n";
			playerMove(player);
		}
	}
	else {
		cout << "Incorrect column or row!\nTry again.\n";
		playerMove(player);
	}
	return true;
}

int main() {
	Player Player1;
	Player Player2;

	createPlayer(Player1, 1);
	createPlayer(Player2, 2);

	cout << "Go play!\n";

	outGameTable(table);
	
	while (true) {
		if (playerMove(Player1)) {
			playerMove(Player2);
		}
		else {
			playerMove(Player1);
		}
	}

	return 0;
}