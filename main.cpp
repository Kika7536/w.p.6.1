#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");


	cout << "������� 1. ������ ��������������." << endl;
	cout << "-----------------------------" << endl << endl;

	int moonth = 0;

	for (int i = 100; i >= 0; i -= 4) {
		


		if (i == 100) {
			continue;
		}
		else if (i > 0) {
			moonth++;
			cout << "����� " << moonth << " ������ � ��� � ������ ��������� " << i << " ��. ������" << endl;
		}
		else {
			moonth++;
			cout << "����� " << moonth << " ������ ������ ����������" << endl;
		}
		
	}

}