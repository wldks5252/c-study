#include <iostream>
#include <string>
using namespace std;

class VendingMachine
{
private:
	string name; //���� �̸�
	int price; //����
	int total = 0; //���� �ջ� ��
public:
	VendingMachine() {};//������
	void purchase(double v1);
	void menu();
	string getName();
	double getPrice();
	double GetPrice();
	double getTotal();
	void setName(string n);
	void setPrice(int p);
	void setTotal(int t);
};

void VendingMachine::purchase(double v1) {
	int cash, a; //cash�� ���� a�� ���߿� ����ϱ� ���� ���°�
	cout << "�� �ݾ� : " << v1 << endl;
	cout << "���� �Է��ϼ��� : ";
	cin >> cash;
	cout << endl;

	while (1) { //���ѷ��� ������ ���� ������ break���� ��
		if (cash == v1) {
			cout << "�Ž������� �����ϴ�.";
			break;
		}
		else if (cash < v1) {
			cout << "�ݾ��� �����մϴ�. �ٽ� �־��ּ���. : ";
			cin >> cash;
		}
		else if (cash > v1) {
			if (cash % 500 == 0 && cash % 100 == 0) {
				cout << "�Ž������Դϴ�." << endl;
				a = cash - v1;
				cout << "500�� : " << a / 500 << "��" << endl;
				cout << "100�� : " << a % 500 / 100 << "��" << endl;
				break;
			}
			else {
				cout << "�Ž������� 500���� 100���� �����մϴ�." << endl;
				a = cash - v1;
				cout << "500�� : " << a / 500 << "��" << endl;
				cout << "100�� : " << a % 500 / 100 << "��" << endl;
				break;
			}
		}
	}
}

void VendingMachine::menu() {
	cout << "=====SWING ���Ǳ�=====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ����̵� : 2000��" << endl;
	cout << "4. " << name << " : " << price << "��" << endl;
	cout << "5. ���" << endl << endl;
}

string VendingMachine::getName() {
	cin >> name;
	return name;
}

double VendingMachine::getPrice() {
	cin >> price;
	return price;
}

double VendingMachine::getTotal() {
	return total;
}

double VendingMachine::GetPrice() {
	return price; //getprice�� ������ �ߴµ� cin�� �־ ���� �������.
}
void VendingMachine::setName(string n) {
	n = name;
}

void VendingMachine::setPrice(int p) {
	p = price;
}

void VendingMachine::setTotal(int t) {
	total = total + t;
}

int main(void) {
	VendingMachine VM;
	
	VendingMachine *p = &VM;

	cout << "=====SWING ���Ǳ�=====" << endl;
	cout << "1. ��ī�ݶ� : 1500��" << endl;
	cout << "2. ��Ÿ500 : 900��" << endl;
	cout << "3. �Ŀ����̵� : 2000��" << endl;
	cout << "4. �غ���" << endl;
	cout << "5. ���" << endl << endl;

	int a, b;
	
	cout << "�߰��� ���� �̸��� �Է��� �ּ��� : ";
	(*p).setName(VM.getName());
	cout << "�Ǹ��� ������ �Է��ϼ��� : ";
	(*p).setPrice(VM.getPrice());

	cout << endl;

	do{
		VM.menu();
		cout << "��ȣ�� �������ּ��� : ";
		cin >> a;
		
		switch (a) {
		case 1:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 1500);
			break;

		case 2:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 900);
			break;

		case 3:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * 2000);
			break;

		case 4:
			cout << "������ ������ �Է����ּ��� : ";
			cin >> b;
			cout << endl;
			(*p).setTotal(b * VM.GetPrice());
			break;

		case 5:
			break;

		default:
			cout << "�̻��� �����Դϴ�." << endl;
		}
	} while (a != 5);

	cout << endl;

	cout << "��� ���Դϴ�. ��ٷ��ּ���..." << endl << endl;
	
	VM.purchase(VM.getTotal());

	cout << "�ȳ���������." << endl << endl;
}