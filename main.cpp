#include <iostream>

using namespace std;

char table[3][3] = {
	'#','#','#',
	'#','#','#',
	'#','#','#'
};

struct Player{
	uint16_t number;
	string name;
	char symbol;
};

void createPlayer(Player &player, const uint16_t number) {
	player.number = number;
	cout << "Player " << number << " name: ";
	cin >> player.name;
	cout << "Player " << number << " symbol: ";
	cin >> player.symbol;

	cout << "Player " << number << " created!\n";
}

void outGameTable(char (&table)[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}
}

void playerMove(Player &player) {
	uint16_t column, row, sum;
	cout << "Player " << player.number << ", enter column and row(example: 1 3): ";
	cin >> column >> row;
	sum = column + row;
	if ((sum >= 2) && (sum <= 6)) {
		table[column - 1][row - 1] = player.symbol;
		outGameTable(table);
	}
	else {
		cout << "Incorrect column or row!\nTry again.\n";
		return;
	}
}

int main() {
	Player Player1;
	Player Player2;

	createPlayer(Player1, 1);
	createPlayer(Player2, 2);

	cout << "Go play!\n";

	outGameTable(table);
	
	while (true) {
		playerMove(Player1);
	}

	return 0;
}