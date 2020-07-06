#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
	string name; //계좌주 이름
	int pw; //계좌 비밀번호
	int money; //계좌 잔액

public:
	ATM(); //생성자
	void deposit(); //입금
	void withdraw(); //인출
	void send(string receiver, int sendMon); //이체-받음
	void receive(int receiveMon); //이체-보냄
	int getMoney(); //얼마있는지 출력
	string getName(); //이름 불러오기
	void setName(); //이름 입력
	void setMoney(); //돈 입력
	void setpw(); //비밀번호 입력
	int getpw(); //비밀번호
};

ATM::ATM() {}

void ATM::receive(int receiveMon) {
	money = money + receiveMon;
}

void ATM::send(string receiver, int sendMon) {
	int pw2;

	cout << "비밀번호를 입력해주세요. >> ";
	cin >> pw2;
	while (1) {
		if (pw != pw2)
			cout << "비밀번호가 서로 다릅니다.";
		else
			break;
	}

	money = money - sendMon;
}

void ATM::setName() {
	cin >> name;
}

void ATM::setMoney() {
	cin >> money;
}

void ATM::setpw() {
	cin >> pw;
}

int ATM::getpw() {
	return pw;
}

void ATM::deposit() {
	int a;

	cin >> a;

	money = a + money;
}

void ATM::withdraw() {
	int a, pw2;

	cin >> a;

	do {
		cout << "비밀번호를 입력해주세요 >> ";
		cin >> pw2;
		if (pw == pw2) {
			break;
		}
		else {
			cout << "비밀번호가 틀렸습니다." << endl;
		}
	} while (pw != pw2);

	money = money - a;
}

int ATM::getMoney() {
	return money;
}

string ATM::getName() {
	return name;
}

int main() {
	int a, b, c, d = 9999, e = 9999; // d, e를 0으로 선언하면 오류생김
	int *p = &a;
	int i, pw2, sendMon;
	char x = 120;
	string n, receiver;

	cout << "은행에 가입할 인원을 입력해주세요 >> ";
	cin >> a;

	ATM *pATM = new ATM[a]; //동적할당

	for (int i = 0; i < a; i++) {
		cout << endl << i + 1 << "번째 손님" << endl << endl;

		cout << "성명을 적어주십시오 >> ";
		(pATM + i)->setName(); //배열 선언

		while (1) {
			cout << "비밀번호를 입력해주세요 >> ";
			(pATM + i)->setpw();
			cout << "한 번 더 입력해주세요 >> ";
			cin >> pw2;
			if ((pATM + i)->getpw() == pw2) {
				break;
			}
			else {
				cout << "비밀번호가 서로 다릅니다." << endl << endl;
			}
		}

		cout << "입금할 금액을 입력해주세요 >> ";
		(pATM + i)->setMoney();
	}

	cout << endl;

	while (1) {
		while (1) {
			cout << " --- SWING ATM ---" << endl;
			cout << "성함을 입력해주세요 (종료라면 x를 입력해주세요) >> ";
			cin >> n;

			for (i = 0; i < a; i++) {
				if (n == (pATM + i)->getName()) {
					d = i;
				}
			}

			if (d == 9999 && n != "x")
				cout << "존재하지 않는 계좌주입니다." << endl << endl;
			else
				break;
		}
		if (n == "x") {
			cout << endl << "ATM을 종료합니다.";
			break;
		}

		b = 0; //꼭 선언해야함.

		while (b != 5) {
			cout << endl << " --- SWING ATM " << (pATM + d)->getName() << "님---" << endl;
			cout << "1. 입금" << endl;
			cout << "2. 인출" << endl;
			cout << "3. 이체" << endl;
			cout << "4. 잔액 확인" << endl;
			cout << "5. 종료" << endl << endl;
			cout << "번호를 선택해주세요 >> ";
			cin >> b;

			switch (b) {
			case 1:
				cout << "입금할 금액을 입력해주세요 >> ";
				(pATM + d)->deposit();
				cout << endl;
				cout << "현재 " << (pATM + d)->getName() << "님의 잔액은 " << (pATM + d)->getMoney() << "원 입니다" << endl;
				break;

			case 2:
				cout << "얼마를 인출하시겠습니까? >> ";
				(pATM + d)->withdraw();
				cout << endl;
				cout << "현재 " << (pATM + d)->getName() << "님의 잔액은 " << (pATM + d)->getMoney() << "원 입니다." << endl;
				break;

			case 3:
				cout << "누구에게 보내겠습니까? >> ";
				cin >> receiver;

				for (int j = 0; j < a; j++) {
					if (receiver == (pATM + j)->getName()) {
						e = j;
					}
				}

				if (e == 9999)
					break;

				cout << "얼마를 보내겠습니까? >> ";

				cin >> sendMon;

				(pATM + d)->send(receiver, sendMon);

				cout << endl;

				cout << (pATM + e)->getName() << "님께 " << sendMon << "원을 보냈습니다." << endl << endl;

				cout << "현재 " << (pATM + d)->getName() << "님의 잔액은 " << (pATM + d)->getMoney() << "원 입니다." << endl;

				(pATM + e)->receive(sendMon);
				break;

			case 4:
				cout << (pATM + d)->getName() << "님의 현재 잔액은 " << (pATM + d)->getMoney() << "원 입니다." << endl;
				break;

			case 5:
				break;

			default:
				cout << "이상한 숫자입니다." << endl;
				break;
			}
		}
	}
	delete[] pATM; //동적할당 정리
}