#include <iostream>

using namespace std;

int countNumLength(int num) {
	int numLength = 1;
	int result = 1;
	while (numLength * 10 <= num) {
		numLength *= 10;
		result++;
	}

	return result;
}

int main() {
	int rowsCount;
	int rowWidth = 10;
	cout << "Please enter quantity of rows: ";
	cin >> rowsCount;

	cout << fixed;
	cout << "Numbers and their squares:\n";
	for (int i = 1; i <= rowsCount; i++) {
		cout.width(rowWidth - countNumLength(i));
		cout << "Num. " << i;

		cout << " | ";

		cout.width(rowWidth);
		cout << "Sq. " << i * i;

		cout << "\n";
	}
	cout << endl;

	return 0;
}

