#include <iostream>
using namespace std;

int main() {
	int num[5];
	int i;
	int count1 = 0; //count1, count2�� 0���� �Ҵ������� ������ �ڿ� ������ ����.
	int count2 = 0;

	for (i = 0; i < 5; i++) {
		cout << "���ڸ� �Է����ּ��� : ";
		cin >> num[i];
	}

	cout << endl << "---------���---------" << endl;
	
	cout << "Ȧ�� : "; //for������ ������ Ȧ���� ���� �Է��� Ȧ��������ŭ ���͵� ����� �ȴ�.
	for (i = 0; i < 5; i++) {
		if ((num[i] % 2) == 1) {
			cout << num[i] << " ";
			count1++; //���⼭ �̰� ����� ���߿� ���� Ȧ�� ������ �� �� �ִ�.
		}
	}
	cout << endl << "Ȧ���� �� " << count1 << "�� �Դϴ�." << endl;

	//¦���� Ȧ���� �Ȱ��� �ϸ� �ȴ�.
	cout << "¦�� : ";
	for (i = 0; i < 5; i++) {
		if ((num[i] % 2) == 0) {
			cout << num[i] << " ";
			count2++;
		}
	}
	cout << endl << "¦���� �� " << count2 << "�� �Դϴ�." << endl;
}