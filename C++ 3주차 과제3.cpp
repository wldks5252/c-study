#include <iostream>
using namespace std;

int num[5];
int i, k, tmp;

void sort() {
	cout << "< 정렬 전 >" << endl;
	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << num[i];
		cout << endl;
	}
	cout << endl;
}

void print() {
	cout << "< 정렬 후 >" << endl;
	for (i = 0; i < 5; i++) {
		for (k = 0; k < 5; k++) {
			if (num[k] > num[i]) {
				tmp = num[k];
				num[k] = num[i];
				num[i] = tmp;
			}
		}
	}
	
	for (i = 0; i < 5; i++) {
		cout << i + 1 << ". " << num[i] << endl;
	}
}

int main() {
	cout << "숫자 다섯개를 입력해주세요 (띄어쓰기로 구분) >> ";
	for (i = 0; i < 5; i++) {
		cin >> num[i];
		cout << " ";
	}
	cout << endl;

	sort();
	print();
}