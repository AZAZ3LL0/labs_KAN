//lab2.cpp

#include <iostream>
#include <algorithm>
using namespace std;

#define ARRAY_LENGTH 4

int main()
{

	setlocale(LC_ALL, "RUS");

	int lm = 0; //для меню

	cout << "Выберите желаемое действие: " << endl;
	cout << "1: Решить задачу: " << endl;
	cout << "2: Выйти из приложения (без решения задачи)" << endl;
	cout << "Введите желаемое действие: ";

	cin >> lm;

	switch (lm) 
	{
		case 1:

			int a, b, c, d;

			cout << "Введите 4 числа" << endl;

			cin >> a;
			cin >> b;
			cin >> c;
			cin >> d;

			if ((a <= b) && (b <= c) && (c <= d))
			{
				a = d;
				b = d;
				c = d;
			}

			else
				if ((a > b) && (b > c) && (c > d));
				
				else
				{
					a = a * a;
					b = b * b;
					c = c * c;
					d = d * d;
				}
			
			cout << a << "\n" << b << "\n" << c << "\n" << d << endl;

			break;


		case 2:

			break;

		default:
			
			cout<< "Введите 1 или 2" <<endl;

			break; // конец switch
	}
	
	system("pause");

	return 0;
	
}