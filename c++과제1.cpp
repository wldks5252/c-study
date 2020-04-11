#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name, birth, age, major;
	cout << "이름을 입력하세요 : ";
	getline(cin, name);
	cout << "생일을 입력하세요 : ";
	getline(cin, birth);
	cout << "나이를 입력하세요 : ";
	getline(cin, age);
	cout << "소속학과를 입력하세요 : ";
	getline(cin, major);

	cout << endl<< "===================================" << endl;
	cout << "<회원정보>" << endl;
	cout << "이름 : " << name << "" << endl;
	cout << "생일 : " << birth << "" << endl;
	cout << "나이 : " << age << "" << endl;
	cout << "소속학과 : " << major << "" << endl;
}