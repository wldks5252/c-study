#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

int main(string *name, string *num) {
	int a;

	Phone swing;
	swing.addPhone();
	cout << endl;

	do { //항상 나오는 말은 do while 로
		cout << "1. 최신 등록 전화번호 조회" << endl;
		cout << "2. 최신 등록 전화번호 수정" << endl;
		cout << "3. 종료" << endl;

		cin >> a;

		switch (a) { //switch case로 숫자 입력시 출력
		case 1:
			cout << swing.getName() << "::" << swing.getPnum() << endl;
			break;

		case 2:
			cout << "이름을 입력하세요 >> ";
			swing.editPhone();
			break;

		case 3:
			break;

		default:
			cout << "이상한 숫자입니다." << endl;
		}
	} while (a != 3);
}