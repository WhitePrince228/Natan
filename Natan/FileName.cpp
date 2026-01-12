#include "Windows.h"
#include <iostream>

//https://docs.google.com/document/d/1om947K__I2kWmfEZ1dXwYfzWbCecrz0MVUEBZojgfFA/edit?tab=t.0 

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);





	struct smth {
		int local;
		int x;

		int y;
		int width;
		int height;

	};
	smth box;
	string t[4] = { "1 Бездна", "2 Город", "3 Пустыня", "4 Канава" };
	
	for (int i = 0; i < 4; i++) {
		cout << t[i] << endl;

	}
	cin >> box.local;
	cout << t[box.local - 1];

//	int money;
//	string t[6] = { "1 молоко", "2 макароны", "3 масло", "4 сыр", "5 сок", "6 сосиски" };
//	int pricecolvo[6][2] = { {100,2}, {80,1}, {120,3}, {100,2}, {90,3}, {110,3} };
//	cin >> money;
//	cout << money << endl;
//
//	for (int i = 0; i < 6; i++) {
//		cout << t[i] << endl;
//	}
//	int b;
//	cin >> b;
//	cout << t[b-1] << endl;
//	while (true) {
//		int c;
//		cin >> c;
//		if (c <= pricecolvo[b-1][1]) {
//
//			while (true) {
//				if (money >= pricecolvo[b - 1][0]* c) {
//
//					money -= pricecolvo[b - 1][0] * c;
//					cout << "Успех" <<endl;
//					break;
//				}
//				else if (money < pricecolvo[b - 1][0]*c) {
//					cout << "Недостаточно денег" <<endl;
//					cin >> c;
//				}
//
//			}
//			break;
//		}
//		if (c > pricecolvo[b - 1][1]) {
//
//			cout << "столько нет" << endl;
//
//		}
//	}
	
	

	//for (int i = 0; i <= 5; i++) {
		//srand(i);
		//int b = rand() % 5;

		//cout << t[rand()%2]<< endl;

		/*string a;
		string zxc = t[rand() % 2];
		cout << zxc;
		cin >> a;
		if (zxc == a) {
			cout << "поражение";

		}
		else if (zxc == "камень")
		{
			if (a == "ножницы") {
				cout << "поражение";

			}
			else if (a == "бумага")
			{
				cout << "победа";
			}
			else if (a == "камень")

			{
				cout << "ничья";
			}
		}*/



	}
