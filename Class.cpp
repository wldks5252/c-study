#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

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