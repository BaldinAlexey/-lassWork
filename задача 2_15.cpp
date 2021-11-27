
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n, z, k;
	bool flag = false;
	cin >> n >> z;
	int chislo = n;
	while (n > 0 && !flag)
	{
		k = n % 10;
		if (k == z)
		{
			flag = true;
			cout << "Цифра" << " " << z << " " << "состоит в числе!" << endl;
		}
		else
		{
			n = n / 10;
		}
	}
		if (!flag)
		{
			cout << "Цифры " << z << " " << "В числе" << " " << chislo << " " << "нет" << endl;
		}
	return 0;
}