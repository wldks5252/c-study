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

string Phone::addPhone() { //�̸�, ��ȭ��ȣ �Է¹޴� ��
	cout << " --- swing ��ȭ��ȣ�� --- " << endl;
	cout << "�̸��� �Է��� �ּ��� >> ";
	cin >> name;
	cout << "��ȭ��ȣ�� �Է��� �ּ��� >> ";
	cin >> num;
	return num;
}

string Phone::editPhone() {
	string name2;

	cin >> name2;
	
	while (name2 != name) { //name2�� name�� ���� ������ ��� �ݺ�
		cout << "����ó�� �������� �ʽ��ϴ�. �ٽ� �Է����ּ��� >> ";
		cin >> name2;
	}
	
	cout << "������ ��ȭ��ȣ�� �Է��� �ּ��� >> ";
	num.erase(); //num�� �ִ� ��ȭ��ȣ ���ֱ�
	cin >> num; //num�� ���ο� ��ȣ �Է�
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

	do { //�׻� ������ ���� do while ��
		cout << "1. �ֽ� ��� ��ȭ��ȣ ��ȸ" << endl;
		cout << "2. �ֽ� ��� ��ȭ��ȣ ����" << endl;
		cout << "3. ����" << endl;
		
		cin >> a;

		switch (a) { //switch case�� ���� �Է½� ���
		case 1:
			cout << swing.getName() << "::" << swing.getPnum() << endl;
			break;

		case 2:
			cout << "�̸��� �Է��ϼ��� >> ";
			swing.editPhone();
			break;
		
		case 3:
			break;

		default:
			cout << "�̻��� �����Դϴ�." << endl;
		}
	} while (a != 3);
}