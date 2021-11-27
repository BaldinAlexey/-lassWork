
#include <iostream>
using namespace std;
int main()
{
	setlocale (LC_ALL, "RUS");
	int n, t, max, min;
	cout << "Введите длину последовательности:" << endl;
	cin >> n;
	cout << "Введите первое число:" << endl;
	cin >> t;
	max = min = t;
	for (int i = 2;i <= n;i++)
	{
		cin >> t;
		if (t > max) { max = t; }
		else if (t < min) { min = t; }
	}
	cout << "Min + Max =" << " " << (max + min) << endl;
	return 0;
}

