//������ lab1.cpp
#include "stdafx.h"
#include <iostream>
#include <fstream> 
#include <string>
#include <cstdio>
#include <stdio.h>
using namespace std;


int main() 
{
	setlocale(LC_ALL, "Rus"); //���������� ����������� ������ �� ������� �����

	const float M_PI = 3.14;
	double a = 60; //���� ����� ���������

	int x1, x2, x3; //���������� ������� �������

	cout << "������� �1:" << endl;
	cin >> x1;

	cout << "������� �2:" << endl;
	cin >> x2;

	cout << "������� �3:" << endl;
	cin >> x3;

	int y1, y2, y3; //���������� ������� �������

	cout << "������� y1:" << endl;
	cin >> y1;

	cout << "������� �2:" << endl;
	cin >> y2;

	cout << "������� �3:" << endl;
	cin >> y3;

	int radians = a * (M_PI / 180);

	float DlinaX = sqrt(x1 * x1 + x2 * x2 + x3 * x3);
	float DlinaY = sqrt(y1 * y1 + y2 * y2 + y3 * y3);

	float p = x1 * y1 + x2 * y2 + x3 * y3; //��������� ������������
	
	cout << "����� ������� ������� = " << DlinaX << endl;
	cout << "����� ������� ������� = " << DlinaY << endl;
	cout << "��������� ������������ = " << p << endl;

	system("pause"); //��� ����������� ������� ����� �������... 
					 //(����� ������ �� �����������) 

	return 0;
}

