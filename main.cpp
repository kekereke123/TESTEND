#include <iostream>

int function_1(int a, int b) {
	int c = a + b;
	int a = 10;
	return c;
}

int function_2(int a, int b, int c) {
	for (int i = 0; i < c; i++) {
		std::cout << a << " " << b << endl;
	}
	return a + b;
}

int function_3() {
	return 10;
}

int main() {
	int a = function_1(1, 2);
	int c = function_2(5, 6, 7);
	return 0;
}