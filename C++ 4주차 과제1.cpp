#include <iostream>
#include <cstdlib> // rand()�Լ�, srand()�Լ��� ����ϱ� ����
#include <ctime> //time()�Լ��� ����ϱ� ����
using namespace std;

class Random {
public:
	Random(); //Random �Լ� ���
	int next(); // next�Լ� ���
	int nextInRange(int a, int b); //nextInRange�Լ� ���
};

Random::Random() {
	srand(time(0)); 
}
/*srand(time(0))�̰� ������ ������ �� �� ���� 10���� ���ڰ� �Ȱ����� �����µ� �̰��� 
rand�Լ��� �õ尪�� ��ȭ������ �����ϸ��� ���ڰ� ����ȴ�.
time(0) Ȥ�� time(NULL)�� �����ϸ��� ����ȴٴ� ���̴�.*/

int Random::next() {
	return rand(); 
}
/*ù��° rand�Լ��̴�. cstdlib�� ���ԵǾ� �ִ� RAND_MAX�� ������� 32767�̰�,
�����ϴ� ���� 0�̿��� ���� ������ ���� �ʾҴ�.(0 ~ 32767)*/

int Random::nextInRange(int a, int b) {
	return rand() % a + b;
}
/*�ι�° rand�Լ��̴�. �����ϴ� ���� ������ ���� ������ �־ ������ �ΰ� �־���.
rand() % a + b�� (b ~ b + a + 1)�� ���� �� ����� ����Ѵ�.*/

int main() {
	int i, k; // for���� ���� ����, ����ϱ� ���϶�� ���� ����

	Random swing; // Ramdom�̸��� swing
	cout << "--0���� 32767������ ���� ���� 10��--" << endl;
	for (i = 0; i < 10; i++) { //10�� �ݺ�
		k = swing.next(); //rand()�Լ��� ���ư���
		cout << k << " ";
	}
	cout << endl << endl;

	cout << "==2���� 4������ ���� ���� 10��==" << endl;
	for (i = 0; i < 10; i++) { //10�� �ݺ�
		k = swing.nextInRange(3, 2); //rand() % a + b => rand() % 3 + 2 -> 2 ~ 4������ ���� ����
		cout << k << " ";
	}
	cout << endl;
}