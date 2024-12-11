#include <iostream>
//#include <vector>
//#include<list>
#include <map>

using namespace std;

int main()
{
	system("cls");
	system("color 08");
	//vector | list
	{
		/*
			//Шаблонный класс. Каждый объект int
			vector<int> arr{ 0, 1, 2, 3, 4 };
			cout << arr[0] << endl;

		//Автоматически   |				|
		// добавляет тип  |				|
		// данных на 	  |				|
		// основе	      |				|
		// правосторонего |    Начало	|	   	  Конец
		// движение		  |    массива	|		  Массива
		//	      ^                ^                 ^
			for (auto ptr = arr.begin(); ptr != arr.end(); ptr++)
			{
				cout << *ptr << "\t";
			}
			cout << endl;
		*/

		/*
			list<int> List{ 1,2,3,4,5 };

			for (auto ptr = List.begin(); ptr != List.end(); ptr++)
			{
				cout << *ptr << "\t";
			}
			cout << endl;
			List.push_back(100);
			List.push_front(200);
			for (auto ptr = List.begin(); ptr != List.end(); ptr++)
			{
				cout << *ptr << "\t";
			}
		*/
	}

	//map
	{
		/*
		map <string, string> dict;
		string key, value;
		int v;
		do
		{
			cout << "1. Add\n2. Search\n3. Print\n4. Exit--> ";

			cin >> v;
			switch (v)
			{
			case 1:
				system("cls");
				system("color 02");

				cout << "Enter key: ";
				cin >> key;
				cout << "Enter value: ";
				cin >> value;
				dict.insert(make_pair(key, value)); // make_pair - формеруем узел
				break;
			case 2:
				system("cls");
				system("color 04");
				cout << "Enter key: ";
				cin >> key;
				cout << dict.find(key)->second << endl; // вывод найденого значения
				break;
			case 3:
				system("cls");
				system("color 0E");
				for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
				{
					cout << ptr->first << "-" << ptr->second << endl;
				}
				break;
			case 4:
				exit(1);
				break;
			}
		} while (v != 4);
		*/
	}

	return 0;
}