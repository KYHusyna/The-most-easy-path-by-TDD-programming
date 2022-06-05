#include <iostream>
#include<fstream>
#include <string>

using namespace std;
void Path(int path) {
	int n, m, row, columns, min = 0;
	cout << "----test----" << endl;

	cout << "Enter row value: " << endl;
	cin >> row;
	cout << "Enter columns value: " << endl;
	cin >> columns;
	cout << endl;


	int** pathArr = new int* [row];

	int** arr = new int* [row];
	for (int i = 0; i < row; i++) {
		arr[i] = new int[row];
		pathArr[i] = new int[columns];
	}
	int i = 0, j = 0;


	ofstream res("D:\\res.ans");
	res.clear();
	if (res.is_open()) {

		if (row <= 1 && columns <= 1) {
			res << -1;
			cout << -1 << endl;
			return;

		}

		for (i = 0; i < row; i++) {
			for (j = 0; j < columns; j++) {
				if (!(j == 0 || i == row - 1)) {
					arr[i][j] = (30 + (rand() % 40));

				}
				else {
					arr[i][j] = rand() % 10 + 1;
					res << arr[i][j] << " ";
					cout << arr[i][j] << " ";
				}
			}
			cout << endl;
			res << endl;
		}

	}
	res.close();

	cout << endl;
	srand(time(0));
	ofstream out("D:\\test.dat");
	out.clear();
	if (out.is_open()) {
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < columns; j++) {

				out << arr[i][j] << " ";
				cout << arr[i][j] << " ";
			}
			cout << endl;
			out << endl;
		}
	}
	out.close();
	cout << endl;
		
}


int main()
{
	int path = 0;
	Path(path);

}