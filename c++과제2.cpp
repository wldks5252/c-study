#include <iostream>
using namespace std;

int main()
{
	float num, ber;

	cout << "First number>> ";
	cin >> num;
	cout << "Second number>> ";
	cin >> ber;

	cout << "===========계산결과==========="<< endl;
	cout << "" << num << "+" << ber << "= " << (num + ber) << endl;
	cout << "" << num << "-" << ber << "= " << (num - ber) << endl;
	cout << "" << num << "*" << ber << "= " << (num * ber) << endl;
	cout.precision(1); //첫번째 자리까지 소수점을 표현하겠다는 표시
	cout << "" << num << "/" << ber << "= " << (num / ber) << endl;
}