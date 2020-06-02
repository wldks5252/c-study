#include <iostream>
#include <string>
using namespace std;

class Phone { 
	string name;
	string num;
public:
	string addPhone();
	string editPhone();
	string getPnum();
	string getName();
};

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