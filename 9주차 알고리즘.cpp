#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;

	int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	cout << "======2016년 날짜 계산하기======" << endl;

	cout << "a(월) : ";
	cin >> a;

	cout << "b(일) : ";
	cin >> b;

	for (int i = 0; i < a - 1; i++) {
		c = c + month[i];
	}
	c = (c + b) % 7;

	switch (c) {
	case 1:
		cout << a << "월 " << b << "일은 " << "금요일입니다." << endl;
		break;

	case 2:
		cout << a << "월 " << b << "일은 " << "토요일입니다." << endl;
		break;

	case 3:
		cout << a << "월 " << b << "일은 " << "일요일입니다." << endl;
		break;

	case 4:
		cout << a << "월 " << b << "일은 " << "월요일입니다." << endl;
		break;

	case 5:
		cout << a << "월 " << b << "일은 " << "화요일입니다." << endl;
		break;

	case 6:
		cout << a << "월 " << b << "일은 " << "수요일입니다." << endl;
		break;

	case 0:
		cout << a << "월 " << b << "일은 " << "목요일입니다." << endl;
		break;
	}

}