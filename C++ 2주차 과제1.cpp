#include <iostream>
using namespace std;

int main() {
	int num[5];
	int i;
	int count1 = 0; //count1, count2에 0값을 할당해주지 않으면 뒤에 오류가 난다.
	int count2 = 0;

	for (i = 0; i < 5; i++) {
		cout << "숫자를 입력해주세요 : ";
		cin >> num[i];
	}

	cout << endl << "---------결과---------" << endl;
	
	cout << "홀수 : "; //for문으로 넣으면 홀수가 위에 입력한 홀수개수만큼 저것도 출력이 된다.
	for (i = 0; i < 5; i++) {
		if ((num[i] % 2) == 1) {
			cout << num[i] << " ";
			count1++; //여기서 이걸 해줘야 나중에 최종 홀수 개수를 알 수 있다.
		}
	}
	cout << endl << "홀수는 총 " << count1 << "개 입니다." << endl;

	//짝수는 홀수와 똑같이 하면 된다.
	cout << "짝수 : ";
	for (i = 0; i < 5; i++) {
		if ((num[i] % 2) == 0) {
			cout << num[i] << " ";
			count2++;
		}
	}
	cout << endl << "짝수는 총 " << count2 << "개 입니다." << endl;
}