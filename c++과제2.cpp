#include <iostream>
using namespace std;

int main()
{
	float num, ber;

	cout << "First number>> ";
	cin >> num;
	cout << "Second number>> ";
	cin >> ber;

	cout << "===========�����==========="<< endl;
	cout << "" << num << "+" << ber << "= " << (num + ber) << endl;
	cout << "" << num << "-" << ber << "= " << (num - ber) << endl;
	cout << "" << num << "*" << ber << "= " << (num * ber) << endl;
	cout.precision(1); //ù��° �ڸ����� �Ҽ����� ǥ���ϰڴٴ� ǥ��
	cout << "" << num << "/" << ber << "= " << (num / ber) << endl;
}