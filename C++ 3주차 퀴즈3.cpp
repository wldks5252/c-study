#include <iostream>
using namespace std;

int a, b;

void max() {

	
	if (a > b)
		cout << "ū �� >>" << a << endl;
	else
		cout << "ū �� >>" << b << endl;
}

void min() {

	if (a < b)
		cout << "���� �� >>" << a << endl;
	else
		cout << "���� �� >>" << b << endl;
}

int main() {
	cout << "�� ���� �Է����ּ���(����� ����) >> ";
	
	cin >> a >> b;

	cout << endl;

	max();
	min();
}