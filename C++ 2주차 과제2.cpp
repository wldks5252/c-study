#include <iostream>
using namespace std;

int main() {

	int star;
	int i, k, hang;
	int in = 0;

	cout << "--------�� ��� �ý���--------" << endl;

	do { //�ϴ� �Է��ϰ� �����ϴ� ������� �ؾ��ϴ� do~while��
		cout << "����� ���� ����� �������ּ���." << endl;
		cout << "1. �����ﰢ��" << endl;
		cout << "2. ���ﰢ��" << endl;
		cout << "3. ����" << endl;
		cout << "4. ������" << endl;

		cin >> star;

		cout << endl;

		switch (star) { //���ڸ� �����ϸ� case�� ���� �����ϴ� ��
		case 1:
			cout << "�����ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
			cin >> hang;

			//����1
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

			//����2
			for (i = 0; i <= hang; i++) {
				for (k = hang; k > i; k--) {
					cout << "*";
				}
				cout << endl;
			}

			//����3
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
			cout << "���ﰢ���� �����ϼ̽��ϴ�." << endl;
			cout << "���� ������ �������ּ���." << endl;
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

			cout << "���� �����ϼ̽��ϴ�. " << endl;

			//do~while ������ Ȧ���Է�
			do {
				cout << "Ȧ���� �Է��ϼ��� : ";
				cin >> hol;
				in++;
			} while (hol % 2 == 0 || in == 2); //Ȧ���� 2�� �Է��ؾ��ؼ� ���� in++�� �ߴ�.

			///���� ���
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
			cout << "�����⸦ �����ϼ̽��ϴ�." << endl;
			cout << "�����մϴ�." << endl;
			break;

		default:
			cout << "��ȣ�� �߸� �����ϼ̽��ϴ�." << endl;
		}
	} while (star != 4);
}