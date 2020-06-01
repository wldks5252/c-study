#include <iostream>
#include <cstdlib> // rand()함수, srand()함수를 사용하기 위함
#include <ctime> //time()함수를 사용하기 위함
using namespace std;

class Random {
public:
	Random(); //Random 함수 사용
	int next(); // next함수 사용
	int nextInRange(int a, int b); //nextInRange함수 사용
};

Random::Random() {
	srand(time(0)); 
}
/*srand(time(0))이게 없으면 컴파일 할 때 마다 10개의 숫자가 똑같은게 나오는데 이것은 
rand함수의 시드값을 변화시켜줘 컴파일마다 숫자가 변경된다.
time(0) 혹은 time(NULL)은 컴파일마다 변경된다는 것이다.*/

int Random::next() {
	return rand(); 
}
/*첫번째 rand함수이다. cstdlib에 포함되어 있는 RAND_MAX의 상수값은 32767이고,
시작하는 값이 0이여서 굳이 변수를 넣지 않았다.(0 ~ 32767)*/

int Random::nextInRange(int a, int b) {
	return rand() % a + b;
}
/*두번째 rand함수이다. 시작하는 값과 끝나는 값이 정해져 있어서 변수를 두개 넣었다.
rand() % a + b는 (b ~ b + a + 1)의 숫자 중 맘대로 출력한다.*/

int main() {
	int i, k; // for문에 쓰일 변수, 출력하기 편하라고 만든 변수

	Random swing; // Ramdom이름이 swing
	cout << "--0에서 32767까지의 랜덤 정수 10개--" << endl;
	for (i = 0; i < 10; i++) { //10번 반복
		k = swing.next(); //rand()함수가 돌아간다
		cout << k << " ";
	}
	cout << endl << endl;

	cout << "==2에서 4까지의 랜덤 정수 10개==" << endl;
	for (i = 0; i < 10; i++) { //10번 반복
		k = swing.nextInRange(3, 2); //rand() % a + b => rand() % 3 + 2 -> 2 ~ 4까지의 숫자 랜덤
		cout << k << " ";
	}
	cout << endl;
}