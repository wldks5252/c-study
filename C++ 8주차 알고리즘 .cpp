#include <iostream>
using namespace std;

void hanoi(int num, int from, int to, int temp) {
	if (num == 1) //num�� 1�̸� 1���� 2�� �̵�
		cout << from << " -> " << to << endl;
	else {
		/*����Լ� �̿� : �Լ� ������ �ڱ��ڽ��� ȣ���Ͽ� �ݺ��Ǵ� �Լ�
		*/
		hanoi(num - 1, from, temp, to);
		cout << from << " -> " << to << endl;
		hanoi(num - 1, temp, to, from);
	}
}

int main() {
	int num;

	cout << "���� ����(1~20) : ";
	cin >> num; //���ǰ��� �Է�

	cout << (1<<num) - 1 << endl; //shift������(<<) : ���������� ����
	
	hanoi(num, 1, 3, 2); //�Լ�ȣ��
}