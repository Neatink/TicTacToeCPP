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

int main() {
	string* player1_name = new string;
	char* player1_symbol = new char;

	cout << "Player1 name: ";
	cin >> *player1_name;
	cout << "Player1 symbol: ";
	cin >> *player1_symbol;

	Player Player1 = {*player1_name,*player1_symbol};
	cout << "Player1 created!\n";
	delete player1_name, player1_symbol;


	string* player2_name = new string;
	char* player2_symbol = new char;

	cout << "Player2 name: ";
	cin >> *player2_name;
	cout << "Player2 symbol: ";
	cin >> *player2_symbol;


	Player Player2 = {*player2_name, *player2_symbol};
	cout << "Player2 created!\n";
	delete player2_name, player2_symbol;

	cout << "Go play!\n";

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << table[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}