#include <iostream>
using namespace std;


void sort(int *num) {
	int i, k, tmp;

	for (i = 0; i < 5; i++) {
		for (k = 0; k < 5; k++) {
			if (num[k] > num[i]) {
				tmp = num[k];
				num[k] = num[i];
				num[i] = tmp;
			}
		}
	}
}

void print(int *num) {
	int i;

	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << num[i] << endl;
	}
}

int main() {
	int num[5], i;

	cout << "���� �ټ����� �Է����ּ��� (����� ����) >> ";
	for (i = 0; i < 5; i++) {
		cin >> num[i];
		cout << " ";
	}
	cout << endl;

	cout << "< ���� �� >" << endl;
	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << num[i];
		cout << endl;
	}
	cout << endl;

	cout << "< ���� �� >" << endl;
	sort(num);
	print(num);
}