#include "Windows.h"
#include <iostream>

//https://docs.google.com/document/d/1om947K__I2kWmfEZ1dXwYfzWbCecrz0MVUEBZojgfFA/edit?tab=t.0 

using namespace std;

int main() {

	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);






	struct loc {
		string name;
		string desc;

		int id;
		
		

	};
	struct Hero 
	{
			string name;
			int current_loc;
			int hp;
			int dmg;
			int wallet;

	};

	struct enemy {
		string name;
		string desc;
		int hp;
		int dmg;
		int award;
		int current_loc;
	};
	loc location[4];
	location[0].name = "Бездна";
	location[0].desc = "Добро пожаловать в бездну";
	location[0].id = 1;
	location[1].name = "Город";
	location[1].desc = "Добро пожаловать в Город";
	location[1].id = 2;
	location[2].name = "Пустыня";
	location[2].desc = "Добро пожаловать в пустыню";
	location[2].id = 3;
	location[3].name = "Канава";
	location[3].desc = "Добро пожаловать в Канаву";
	location[3].id = 4;

	Hero stats;
	stats.hp = 100;
	stats.name = "Berserk";
	stats.current_loc = 1;
	stats.dmg = 50;

	enemy boss[2];
	boss[0].name = "goblinjunior";
	boss[0].desc = "У него 120 хп и малое количество урона";
	boss[0].hp = 90;
	boss[0].dmg = 20;
	boss[0].award = 30;
	boss[0].current_loc = 1;

	boss[1].name = "varvar";
	boss[1].desc = "У него 150 хп и среднее количество урона";
	boss[1].hp = 120;
	boss[1].dmg = 30;
	boss[1].award = 50;
	boss[1].current_loc = 2;


	while (stats.hp > 0) {
		for (int i= 0; i < 4; i++) {
			cout << location[i].name << endl;
		}

		int choice;
		cin >> choice;
		if (choice == stats.current_loc) {
		cout << "Ты и так здесь" << endl; 
		}
		else
		{
			cout << location[choice - 1].name << endl;
			cout << location[choice - 1].desc <<endl; 
			stats.current_loc = choice;
		}
		if (boss[0].current_loc == stats.current_loc) {
			cout << boss[0].desc << endl;
			while (boss[0].hp > 0) {
				cout << boss[0].hp;
				int chosefight ;
				cin >> chosefight ;
				if (chosefight == 1) {
					boss[0].hp -= stats.dmg;
				}
				else { 
					srand(time(0));
					int chance = rand() % 100;
					if (chance < 5) {
						cout << "Ты успешно избежал боя" << endl;
						break;
					}
					else {
						cout << "Тебе не повезло и ты вступаешь в бой" << endl;
					}

				}
			}
		}

	} 




	//string t[4] = { "1 Бездна", "2 Город", "3 Пустыня", "4 Канава" };
	//
	//for (int i = 0; i < 4; i++) {
	//	cout << t[i] << endl;

	//}
	//cin >> box.local;
	//cout << t[box.local - 1];

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
