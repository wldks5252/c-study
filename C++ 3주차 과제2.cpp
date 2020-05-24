#include <iostream>
using namespace std;

int a, b;

void swap() {
	cout << "swap ÈÄ >> " << b << " " << a << endl;
}
int main() {
	cout << "first number >> ";
	cin >> a;
	cout << "second number >> ";
	cin >> b;

	cout << "swap Àü >> " << a << " " << b << endl;
	swap();
}