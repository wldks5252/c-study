#include <iostream>
#include <string>
using namespace std;

#include "Class.h"

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