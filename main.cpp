#include <iostream>

using namespace std;

char table[3][3][3] = {
	"#","#","#",
	"#","#","#",
	"#","#","#",
};

int main() {
	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int p = 0; p < 3; p++) {
				cout << table[i][j][p];
			}
		}
		cout << endl;
	}

	return 0;
}