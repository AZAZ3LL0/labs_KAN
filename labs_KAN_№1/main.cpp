//модуль lab1.cpp
#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <cstdio>
#include <stdio.h>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Rus"); //добавление возможности писать на русском €зыке

	const float M_PI = 3.14;
	double a = 60; //угол между векторами

	int x1, x2, x3; //координаты первого вектора

	cout << "¬ведите х1:" << endl;
	cin >> x1;

	cout << "¬ведите х2:" << endl;
	cin >> x2;

	cout << "¬ведите х3:" << endl;
	cin >> x3;

	int y1, y2, y3; //координаты второго вектора

	cout << "¬ведите y1:" << endl;
	cin >> y1;

	cout << "¬ведите х2:" << endl;
	cin >> y2;

	cout << "¬ведите х3:" << endl;
	cin >> y3;

	int radians = a * (M_PI / 180);

	float DlinaX = sqrt(x1 * x1 + x2 * x2 + x3 * x3);
	float DlinaY = sqrt(y1 * y1 + y2 * y2 + y3 * y3);

	float p = x1 * y1 + x2 * y2 + x3 * y3; //скал€рное произведение
	
	cout << "ƒлина первого вектора = " << DlinaX << endl;
	cout << "ƒлина второго вектора = " << DlinaY << endl;
	cout << "—кал€рное произведение = " << p << endl;

	system("pause"); //ƒл€ продолжени€ нажмите любую клавишу... 
					 //(чтобы окошко не закрывалось) 

	return 0;
}

