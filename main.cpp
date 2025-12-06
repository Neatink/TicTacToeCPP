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

void createPlayer(struct Player *player, const int number) {
	cout << "Player" << number << " name: ";
	cin >> player->name;
	cout << "Player" << number << " symbol: ";
	cin >> player->symbol;

	cout << "Player" << number << " created!\n";
}

int main() {
	Player Player1;
	Player Player2;

	createPlayer(&Player1, 1);
	createPlayer(&Player2, 2);

	cout << "Go play!\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}