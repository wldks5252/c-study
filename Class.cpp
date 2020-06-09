#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

string Phone::addPhone() { //이름, 전화번호 입력받는 곳
	cout << " --- swing 전화번호부 --- " << endl;
	cout << "이름을 입력해 주세요 >> ";
	cin >> name;
	cout << "전화번호를 입력해 주세요 >> ";
	cin >> num;
	return num;
}

string Phone::editPhone() {
	string name2;

	cin >> name2;

	while (name2 != name) { //name2와 name이 같지 않으면 계속 반복
		cout << "연락처가 존재하지 않습니다. 다시 입력해주세요 >> ";
		cin >> name2;
	}

	cout << "변경할 전화번호를 입력해 주세요 >> ";
	num.erase(); //num에 있는 전화번호 없애기
	cin >> num; //num에 새로운 번호 입력
	return num;
}

string Phone::getPnum() {
	return num;
}

string Phone::getName() {
	return name;
}