
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b,c;
	cin >> a >> b;
	if (b == 0)
	{
		cout << "Нельзя делить на 0" << endl;
		cin >> b;
	}
	c = a / b;
	cout << c << endl;
	return 0;
}
