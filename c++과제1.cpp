#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, birth, age, major;
	cout << "�̸��� �Է��ϼ��� : ";
	getline(cin, name);
	cout << "������ �Է��ϼ��� : ";
	getline(cin, birth);
	cout << "���̸� �Է��ϼ��� : ";
	getline(cin, age);
	cout << "�Ҽ��а��� �Է��ϼ��� : ";
	getline(cin, major);

	cout << endl<< "===================================" << endl;
	cout << "<ȸ������>" << endl;
	cout << "�̸� : " << name << "" << endl;
	cout << "���� : " << birth << "" << endl;
	cout << "���� : " << age << "" << endl;
	cout << "�Ҽ��а� : " << major << "" << endl;
}