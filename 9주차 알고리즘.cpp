#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;

	int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cout << "======2016�� ��¥ ����ϱ�======" << endl;

	cout << "a(��) : ";
	cin >> a;

	cout << "b(��) : ";
	cin >> b;

	for (int i = 0; i < a - 1; i++) {
		c = c + month[i];
	}
	c = (c + b) % 7;

	switch (c) {
	case 1:
		cout << a << "�� " << b << "���� " << "�ݿ����Դϴ�." << endl;
		break;

	case 2:
		cout << a << "�� " << b << "���� " << "������Դϴ�." << endl;
		break;

	case 3:
		cout << a << "�� " << b << "���� " << "�Ͽ����Դϴ�." << endl;
		break;

	case 4:
		cout << a << "�� " << b << "���� " << "�������Դϴ�." << endl;
		break;

	case 5:
		cout << a << "�� " << b << "���� " << "ȭ�����Դϴ�." << endl;
		break;

	case 6:
		cout << a << "�� " << b << "���� " << "�������Դϴ�." << endl;
		break;

	case 0:
		cout << a << "�� " << b << "���� " << "������Դϴ�." << endl;
		break;
	}

}