
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	float a, b, c;
	cout << "Введите a, b, c:" << endl;
	cin >> a >> b >> c;
	float D = ((b * b) - 4 * a * c);
	float x1 = (-b + sqrt(D)) / (2 * a);
	float x2 = (-b - sqrt(D)) / (2 * a);
	if (D > 0) { cout << "x1 =" <<" " << x1 << " " << "x2 = " <<" " << x2 << endl; }
	else if (D < 0) { cout << "Нет корней" << endl; }
	else
		cout << "Один корень" <<" " << "x1 =" << " " << x1 << endl;
	return 0;
}