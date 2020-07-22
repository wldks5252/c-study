#include <iostream>
using namespace std;

void hanoi(int num, int from, int to, int temp) {
	if (num == 1) //num이 1이면 1에서 2로 이동
		cout << from << " -> " << to << endl;
	else {
		/*재귀함수 이용 : 함수 내에서 자기자신을 호출하여 반복되는 함수
		*/
		hanoi(num - 1, from, temp, to);
		cout << from << " -> " << to << endl;
		hanoi(num - 1, temp, to, from);
	}
}

int main() {
	int num;

	cout << "원판 개수(1~20) : ";
	cin >> num; //원판개수 입력

	cout << (1<<num) - 1 << endl; //shift연산자(<<) : 과정수행한 숫자
	
	hanoi(num, 1, 3, 2); //함수호출
}