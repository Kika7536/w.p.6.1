#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");


	cout << "Задание 1. Запасы продовольствия." << endl;
	cout << "-----------------------------" << endl << endl;

	int moonth = 0;

	for (int i = 100; i >= 0; i -= 4) {
		


		if (i == 100) {
			continue;
		}
		else if (i > 0) {
			moonth++;
			cout << "После " << moonth << " месяца у вас в запасе останется " << i << " кг. гречки" << endl;
		}
		else {
			moonth++;
			cout << "После " << moonth << " месяца гречка закончится" << endl;
		}
		
	}

}