#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	a = b;
	b = a;
}

int main() {
	int a, b;

	cout << "first number >> ";
	cin >> a;
	cout << "second number >> ";
	cin >> b;

	cout << "swap �� >> " << a << " " << b << endl;
	swap(a, b);
	cout << "swap �� >> " << a << " " << b << endl;
}

