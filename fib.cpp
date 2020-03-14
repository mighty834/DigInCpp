#include <iostream>

int main() {
	int a = 1, b = 1, quantity;

	std::cout << "Enter how many numbers you need: \n";
	std::cin >> quantity;

	for (int i = 0; i < quantity; i++) {
		std::cout << "| " << a << " |";
	
		b = a + b;
		a = b - a;
	}
	std::cout << "\n" << std::endl;

	return 0;
}

