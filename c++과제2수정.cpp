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
	cout << "" << num << "/" << ber << "= " << (num / ber) << endl;
}