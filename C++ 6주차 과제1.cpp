#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
	string name; //������ �̸�
	int pw; //���� ��й�ȣ
	int money; //���� �ܾ�

public:
	ATM(); //������
	void deposit(); //�Ա�
	void withdraw(); //����
	void send(string receiver, int sendMon); //��ü-����
	void receive(int receiveMon); //��ü-����
	int getMoney(); //���ִ��� ���
	string getName(); //�̸� �ҷ�����
	void setName(); //�̸� �Է�
	void setMoney(); //�� �Է�
	void setpw(); //��й�ȣ �Է�
	int getpw(); //��й�ȣ
};

ATM::ATM() {}

void ATM::receive(int receiveMon) {
	money = money + receiveMon;
}

void ATM::send(string receiver, int sendMon) {
	int pw2;

	cout << "��й�ȣ�� �Է����ּ���. >> ";
	cin >> pw2;
	while (1) {
		if (pw != pw2)
			cout << "��й�ȣ�� ���� �ٸ��ϴ�.";
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
		cout << "��й�ȣ�� �Է����ּ��� >> ";
		cin >> pw2;
		if (pw == pw2) {
			break;
		}
		else {
			cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
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
	int a, b, c, d = 9999, e = 9999; // d, e�� 0���� �����ϸ� ��������
	int *p = &a;
	int i, pw2, sendMon;
	char x = 120;
	string n, receiver;

	cout << "���࿡ ������ �ο��� �Է����ּ��� >> ";
	cin >> a;

	ATM *pATM = new ATM[a]; //�����Ҵ�

	for (int i = 0; i < a; i++) {
		cout << endl << i + 1 << "��° �մ�" << endl << endl;

		cout << "������ �����ֽʽÿ� >> ";
		(pATM + i)->setName(); //�迭 ����

		while (1) {
			cout << "��й�ȣ�� �Է����ּ��� >> ";
			(pATM + i)->setpw();
			cout << "�� �� �� �Է����ּ��� >> ";
			cin >> pw2;
			if ((pATM + i)->getpw() == pw2) {
				break;
			}
			else {
				cout << "��й�ȣ�� ���� �ٸ��ϴ�." << endl << endl;
			}
		}

		cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
		(pATM + i)->setMoney();
	}

	cout << endl;

	while (1) {
		while (1) {
			cout << " --- SWING ATM ---" << endl;
			cout << "������ �Է����ּ��� (������ x�� �Է����ּ���) >> ";
			cin >> n;

			for (i = 0; i < a; i++) {
				if (n == (pATM + i)->getName()) {
					d = i;
				}
			}

			if (d == 9999 && n != "x")
				cout << "�������� �ʴ� �������Դϴ�." << endl << endl;
			else
				break;
		}
		if (n == "x") {
			cout << endl << "ATM�� �����մϴ�.";
			break;
		}

		b = 0; //�� �����ؾ���.

		while (b != 5) {
			cout << endl << " --- SWING ATM " << (pATM + d)->getName() << "��---" << endl;
			cout << "1. �Ա�" << endl;
			cout << "2. ����" << endl;
			cout << "3. ��ü" << endl;
			cout << "4. �ܾ� Ȯ��" << endl;
			cout << "5. ����" << endl << endl;
			cout << "��ȣ�� �������ּ��� >> ";
			cin >> b;

			switch (b) {
			case 1:
				cout << "�Ա��� �ݾ��� �Է����ּ��� >> ";
				(pATM + d)->deposit();
				cout << endl;
				cout << "���� " << (pATM + d)->getName() << "���� �ܾ��� " << (pATM + d)->getMoney() << "�� �Դϴ�" << endl;
				break;

			case 2:
				cout << "�󸶸� �����Ͻðڽ��ϱ�? >> ";
				(pATM + d)->withdraw();
				cout << endl;
				cout << "���� " << (pATM + d)->getName() << "���� �ܾ��� " << (pATM + d)->getMoney() << "�� �Դϴ�." << endl;
				break;

			case 3:
				cout << "�������� �����ڽ��ϱ�? >> ";
				cin >> receiver;

				for (int j = 0; j < a; j++) {
					if (receiver == (pATM + j)->getName()) {
						e = j;
					}
				}

				if (e == 9999)
					break;

				cout << "�󸶸� �����ڽ��ϱ�? >> ";

				cin >> sendMon;

				(pATM + d)->send(receiver, sendMon);

				cout << endl;

				cout << (pATM + e)->getName() << "�Բ� " << sendMon << "���� ���½��ϴ�." << endl << endl;

				cout << "���� " << (pATM + d)->getName() << "���� �ܾ��� " << (pATM + d)->getMoney() << "�� �Դϴ�." << endl;

				(pATM + e)->receive(sendMon);
				break;

			case 4:
				cout << (pATM + d)->getName() << "���� ���� �ܾ��� " << (pATM + d)->getMoney() << "�� �Դϴ�." << endl;
				break;

			case 5:
				break;

			default:
				cout << "�̻��� �����Դϴ�." << endl;
				break;
			}
		}
	}
	delete[] pATM; //�����Ҵ� ����
}