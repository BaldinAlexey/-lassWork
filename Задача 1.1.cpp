
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a > b && a > c)
		cout << "max =" << a << endl;
	if (b > a && b > c)
		cout << "max =" << b << endl;
	else if (c > b && c > a)
		cout << "max =" << c << endl;
	return 0;
}
