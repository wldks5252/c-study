#include <iostream>
using namespace std;

int a, b;

void swap() {
	cout << "swap �� >> " << b << " " << a << endl;
}
int main() {
	cout << "first number >> ";
	cin >> a;
	cout << "second number >> ";
	cin >> b;

	cout << "swap �� >> " << a << " " << b << endl;
	swap();
}