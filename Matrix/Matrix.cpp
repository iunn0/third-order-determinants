#include <iostream>

using namespace std;

int main() {
	short int result;
	short int matrix[3][3];
	
	cout << "Positions : " << endl;
	cout << "-----------------" << endl;
	cout << "| 0:0  0:1  0:2 |" << endl;
	cout << "| 1:0  1:1  1:2 |" << endl;
	cout << "| 2:0  2:1  2:2 |" << endl;
	cout << "-----------------" << endl;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			int num;
			cout << "\nEnter element in position " << i << ":" << j << " -- ";
			cin >> num;
			matrix[i][j] = num;
		}
	}
	
	result = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[0][2] * matrix[1][1] * matrix[2][0]) - (matrix[0][1] * matrix[1][0] * matrix[2][2]) - (matrix[0][0] * matrix[1][2] * matrix[2][1]);
	cout << result << endl; 

	return 0;
}