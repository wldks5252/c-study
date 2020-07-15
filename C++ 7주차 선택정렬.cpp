#include <iostream>
using namespace std;

int main() {
	int a, min, tmp, b = 0;
	
	cout << "입력" << endl;

	cin >> a;

	int *p = new int[a];

	for (int i = 0; i < a; i++) {
		cin >> p[i];
	}

	cout << "출력" << endl;

	for (int i = 0; i < a; i++) {
		min = p[i];
		for (int k = i + 1; k < a; k++) {
			if (min > p[k]) {
				min = p[k];
				b = k;
			}
		}

		tmp = p[i];
		p[i] = p[b];
		p[b] = tmp;

		for (int k = 0; k < a; k++) {
			cout << p[k] << " ";
		}
		cout << endl;
	}

	delete [] p;
}