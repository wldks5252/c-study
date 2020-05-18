#include <iostream>
using namespace std;

int main() {

	int star;
	int i, k, hang;
	int in = 0;

	cout << "--------별 찍기 시스템--------" << endl;

	do { //일단 입력하고 선택하는 방식으로 해야하니 do~while문
		cout << "만들고 싶은 모양을 선택해주세요." << endl;
		cout << "1. 직각삼각형" << endl;
		cout << "2. 정삼각형" << endl;
		cout << "3. 나비" << endl;
		cout << "4. 나가기" << endl;

		cin >> star;

		cout << endl;

		switch (star) { //숫자를 선택하면 case에 따라 선택하는 식
		case 1:
			cout << "직각삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> hang;

			//직각1
			for (i = 0; i <= hang; i++) {
				for (k = hang; k > i; k--) {
					cout << " ";
				}
				for (k = 0; k < i; k++) {
					cout << "*";
				}
				cout << endl;
			}

			cout << endl;

			//직각2
			for (i = 0; i <= hang; i++) {
				for (k = hang; k > i; k--) {
					cout << "*";
				}
				cout << endl;
			}

			//직각3
			for (i = 0; i <= hang; i++) {
				for (k = 0; k < i; k++) {
					cout << " ";
				}
				for (k = hang; k > i; k--) {
					cout << "*";
				}
				cout << endl;
			}
			break;

		case 2:
			cout << "정삼각형을 선택하셨습니다." << endl;
			cout << "행의 개수를 선택해주세요." << endl;
			cin >> hang;

			for (i = 0; i < hang; i++) {
				for (k = hang - 1; k > i; k--) {
					cout << " ";
				}
				for (k = 0; k < 2 * i + 1; k++) {
					cout << "*";
				}
				cout << endl;
			}
			break;

		case 3:
			int hol;

			cout << "나비를 선택하셨습니다. " << endl;

			//do~while 문으로 홀수입력
			do {
				cout << "홀수를 입력하세요 : ";
				cin >> hol;
				in++;
			} while (hol % 2 == 0 || in == 2); //홀수를 2번 입력해야해서 위에 in++을 했다.

			///날개 출력
			for (i = 1; i < hol / 2 + 1; i++) {
				for (k = 1; k <= i; k++) {
					cout << "*";
				}
				for (k = 1; k <= hol - i * 2; k++) {
					cout << " ";
				}
				for (k = 1; k <= i; k++) {
					cout << "*";
				}
				cout << endl;
			}
			for (k = 1; k <= hol; k++) {
				cout << "*";
			}
			cout << endl;

			for (i = hol / 2; i > 0; i--) {
				for (k = 1; k <= i; k++) {
					cout << "*";
				}
				for (k = 1; k <= hol - i * 2; k++) {
					cout << " ";
				}
				for (k = 1; k <= i; k++) {
					cout << "*";
				}
				cout << endl;
			}
			break;

		case 4:
			cout << "나가기를 선택하셨습니다." << endl;
			cout << "감사합니다." << endl;
			break;

		default:
			cout << "번호를 잘못 선택하셨습니다." << endl;
		}
	} while (star != 4);
}