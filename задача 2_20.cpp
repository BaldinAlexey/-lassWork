﻿
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float n, z, a;
	int i = 1;
	bool flag = false;
	cin >> n >> z;
	while (i <= n && !flag)
	{
		a = sin(n + i / n);
		a = round(a * 10) / 10; // для удобства проверки
			if (a == z)
			{
				flag = true;
			}
			else { i++; }
	}
	if (flag)
	{
		cout << "Элемент " << z << "найден. Его номер: " << i << endl;
	}
	else
	{
		cout << "Элемент не найден" << endl;
	}
	return 0;
}

