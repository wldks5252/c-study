#include <iostream>
#include <string>
using namespace std;

class PhoneBook {
private:
	string number; //전화번호
	string name; //이름
public:
	PhoneBook(); //생성자
	void setPnum(string number); //전화번호 저장
	void setName(string name); //이름 저장
	void addPhone(string name, string number); //이름과 전화번호 저장
	string getPnum(); //전화번호 가져오기
	string getName(); //이름 가져오기
	void editPnum(string number);
};

class PhoneBookManager {
private:
	PhoneBook *phoneB; //객체 배열 생성을 위한 선언
	int size; //객체 배열의 크기
public:
	PhoneBookManager(int num); //생성장-PhoneBook으로 객체배열
	void showAll(); //전화번호부 목록 보기
	void searchPnum(); //전화번호 찾기
	void addPnum(); //전화번호 객체 추가 생성(배열의 원소 개수가 +1되야 함)
	void editPnum(); //전화번호 수정
};

PhoneBook::PhoneBook(){}

void PhoneBook::setPnum(string number) {
	this->number = number;
}

void PhoneBook::setName(string name) {
	this->name = name;
}

void PhoneBook::addPhone(string name, string number) {
	this->number = number;
	this->name = name;
 }

string PhoneBook::getName() {
	return name;
}

string PhoneBook::getPnum() {
	return number;
}

PhoneBookManager::PhoneBookManager(int num) {
	string n, p;
	size = num;

	phoneB = new PhoneBook[size];

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "번째 사람의 이름을 입력해주세요 >> ";
		cin >> n;
		phoneB[i].setName(n);

		cout << i + 1 << "번째 사람의 전화번호를 입력해주세요 >> ";
		cin >> p;
		phoneB[i].setPnum(p);
		cout << endl;
	}
}

void PhoneBookManager::showAll() {
	cout << endl << endl;

	for (int i = 0; i < size; i++)
		cout << i + 1 << ". " << phoneB[i].getName() << ":: " << phoneB[i].getPnum() << endl;
}

void PhoneBookManager::searchPnum() {
	int a = 9999;
	string n1;

	cout << endl << endl << "누구의 번호를 검색하겠습니까? >> ";
	cin >> n1;
	for (int i = 0; i < size; i++) {
		if (n1 == phoneB[i].getName())
			a = i;
	}

	if (a == 9999) // a가 변경되지 않으면 실행
		cout << "연락처가 존재하지 않습니다. " << endl;
	else
		cout << phoneB[a].getName() << "님의 전화번호 : " << phoneB[a].getPnum() << endl;
}

void PhoneBookManager::addPnum() {
	string N, P;
	
	cout << endl << endl << "이름을 입력해주세요 >> ";
	cin >> N;
	cout << "전화번호를 입력해주세요 >> ";
	cin >> P;

	PhoneBook *PB = new PhoneBook[size + 1];

	for (int i = 0; i < size; i++)
		PB[i] = phoneB[i];

	delete[] phoneB;
	size++;

	phoneB = new PhoneBook[size];
	
	for (int i = 0; i < size; i++)
		phoneB[i] = PB[i];

	phoneB[size - 1].addPhone(N, P);

	cout << "전화번호가 추가되었습니다. " << endl;
}

void PhoneBookManager::editPnum() {
	int a = 9999;
	string en, ep;
	
	cout << endl << endl << "누구의 번호를 수정하겠습니까? >> ";
	cin >> en;

	for (int i = 0; i < size; i++) {
		if (en == phoneB[i].getName())
			a = i;
	}

	if (a < size) { //a가 size보다 작으면 실행
		cout << "변경할 번호를 입력해주세요 >> ";
		cin >> ep;
		
		phoneB[a].editPnum(ep);

		cout << "전화번호가 변경되었습니다. " << endl;
	}
	
	if(a == 9999)
		cout << "연락처가 존재하지 않습니다." << endl;
}

void PhoneBook::editPnum(string number) {
	this->number.replace(0, 13, number);
}

int main() {
	int a, b = 0;
	int i; 
	
	cout << "--- SWING 전화번호부 --- " << endl;
	cout << "저장할 전화번호의 수를 입력해주세요 >> ";
	cin >> a;

	cout << endl;

	PhoneBookManager PBM(a);

	cout << endl;

	while (b != 5) {
		cout << "--- SWING 전화번호부 ---" << endl;
		cout << "1. 전화번호부 보기" << endl;
		cout << "2. 전화번호 검색" << endl;
		cout << "3. 전화번호 추가하기" << endl;
		cout << "4. 전화번호 수정하기" << endl;
		cout << "5. 종료" << endl;
		cout << "번호를 입력해주세요 >> ";
		cin >> b;

		switch (b) {
		case 1:
			PBM.showAll();
			break;

		case 2:
			PBM.searchPnum();
			break;

		case 3:
			PBM.addPnum();
			break;

		case 4:
			PBM.editPnum();
			break;

		case 5:
			cout << endl << endl << "프로그램을 종료합니다." << endl;
			break;

		default:
			cout << "잘 못 입력하셨습니다." << endl;
			break;
		}
	}
}