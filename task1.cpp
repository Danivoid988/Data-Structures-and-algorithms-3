#include <iostream>
using namespace std;
int main()
{

	int **board;
	board = new int *[3];
	board[0] = new int[3];
	board[1] = new int[3];
	board[2] = new int[3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cin >> board[i][j];
		}
	}
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			cout<<board[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
