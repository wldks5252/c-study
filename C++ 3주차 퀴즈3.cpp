#include <iostream>
using namespace std;

int a, b;

void max() {

	
	if (a > b)
		cout << "큰 수 >>" << a << endl;
	else
		cout << "큰 수 >>" << b << endl;
}

void min() {

	if (a < b)
		cout << "작은 수 >>" << a << endl;
	else
		cout << "작은 수 >>" << b << endl;
}

int main() {
	cout << "두 수를 입력해주세요(띄어쓰기로 구분) >> ";
	
	cin >> a >> b;

	cout << endl;

	max();
	min();
}