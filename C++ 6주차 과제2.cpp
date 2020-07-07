#include <iostream>
#include <string>
using namespace std;

class PhoneBook {
private:
	string number; //��ȭ��ȣ
	string name; //�̸�
public:
	PhoneBook(); //������
	void setPnum(string number); //��ȭ��ȣ ����
	void setName(string name); //�̸� ����
	void addPhone(string name, string number); //�̸��� ��ȭ��ȣ ����
	string getPnum(); //��ȭ��ȣ ��������
	string getName(); //�̸� ��������
	void editPnum(string number);
};

class PhoneBookManager {
private:
	PhoneBook *phoneB; //��ü �迭 ������ ���� ����
	int size; //��ü �迭�� ũ��
public:
	PhoneBookManager(int num); //������-PhoneBook���� ��ü�迭
	void showAll(); //��ȭ��ȣ�� ��� ����
	void searchPnum(); //��ȭ��ȣ ã��
	void addPnum(); //��ȭ��ȣ ��ü �߰� ����(�迭�� ���� ������ +1�Ǿ� ��)
	void editPnum(); //��ȭ��ȣ ����
};

PhoneBook::PhoneBook(){}

void PhoneBook::setPnum(string number) {
	this->number = number;
}

void PhoneBook::setName(string name) {
	this->name = name;
}

void PhoneBook::addPhone(string name, string number) {
	this->number = number;
	this->name = name;
 }

string PhoneBook::getName() {
	return name;
}

string PhoneBook::getPnum() {
	return number;
}

PhoneBookManager::PhoneBookManager(int num) {
	string n, p;
	size = num;

	phoneB = new PhoneBook[size];

	for (int i = 0; i < size; i++) {
		cout << i + 1 << "��° ����� �̸��� �Է����ּ��� >> ";
		cin >> n;
		phoneB[i].setName(n);

		cout << i + 1 << "��° ����� ��ȭ��ȣ�� �Է����ּ��� >> ";
		cin >> p;
		phoneB[i].setPnum(p);
		cout << endl;
	}
}

void PhoneBookManager::showAll() {
	cout << endl << endl;

	for (int i = 0; i < size; i++)
		cout << i + 1 << ". " << phoneB[i].getName() << ":: " << phoneB[i].getPnum() << endl;
}

void PhoneBookManager::searchPnum() {
	int a = 9999;
	string n1;

	cout << endl << endl << "������ ��ȣ�� �˻��ϰڽ��ϱ�? >> ";
	cin >> n1;
	for (int i = 0; i < size; i++) {
		if (n1 == phoneB[i].getName())
			a = i;
	}

	if (a == 9999) // a�� ������� ������ ����
		cout << "����ó�� �������� �ʽ��ϴ�. " << endl;
	else
		cout << phoneB[a].getName() << "���� ��ȭ��ȣ : " << phoneB[a].getPnum() << endl;
}

void PhoneBookManager::addPnum() {
	string N, P;
	
	cout << endl << endl << "�̸��� �Է����ּ��� >> ";
	cin >> N;
	cout << "��ȭ��ȣ�� �Է����ּ��� >> ";
	cin >> P;

	PhoneBook *PB = new PhoneBook[size + 1];

	for (int i = 0; i < size; i++)
		PB[i] = phoneB[i];

	delete[] phoneB;
	size++;

	phoneB = new PhoneBook[size];
	
	for (int i = 0; i < size; i++)
		phoneB[i] = PB[i];

	phoneB[size - 1].addPhone(N, P);

	cout << "��ȭ��ȣ�� �߰��Ǿ����ϴ�. " << endl;
}

void PhoneBookManager::editPnum() {
	int a = 9999;
	string en, ep;
	
	cout << endl << endl << "������ ��ȣ�� �����ϰڽ��ϱ�? >> ";
	cin >> en;

	for (int i = 0; i < size; i++) {
		if (en == phoneB[i].getName())
			a = i;
	}

	if (a < size) { //a�� size���� ������ ����
		cout << "������ ��ȣ�� �Է����ּ��� >> ";
		cin >> ep;
		
		phoneB[a].editPnum(ep);

		cout << "��ȭ��ȣ�� ����Ǿ����ϴ�. " << endl;
	}
	
	if(a == 9999)
		cout << "����ó�� �������� �ʽ��ϴ�." << endl;
}

void PhoneBook::editPnum(string number) {
	this->number.replace(0, 13, number);
}

int main() {
	int a, b = 0;
	int i; 
	
	cout << "--- SWING ��ȭ��ȣ�� --- " << endl;
	cout << "������ ��ȭ��ȣ�� ���� �Է����ּ��� >> ";
	cin >> a;

	cout << endl;

	PhoneBookManager PBM(a);

	cout << endl;

	while (b != 5) {
		cout << "--- SWING ��ȭ��ȣ�� ---" << endl;
		cout << "1. ��ȭ��ȣ�� ����" << endl;
		cout << "2. ��ȭ��ȣ �˻�" << endl;
		cout << "3. ��ȭ��ȣ �߰��ϱ�" << endl;
		cout << "4. ��ȭ��ȣ �����ϱ�" << endl;
		cout << "5. ����" << endl;
		cout << "��ȣ�� �Է����ּ��� >> ";
		cin >> b;

		switch (b) {
		case 1:
			PBM.showAll();
			break;

		case 2:
			PBM.searchPnum();
			break;

		case 3:
			PBM.addPnum();
			break;

		case 4:
			PBM.editPnum();
			break;

		case 5:
			cout << endl << endl << "���α׷��� �����մϴ�." << endl;
			break;

		default:
			cout << "�� �� �Է��ϼ̽��ϴ�." << endl;
			break;
		}
	}
}