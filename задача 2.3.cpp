#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	int n;
	int t, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		t = 1;
		for (int j = i; j <= i * 2; j++)
		{
			t *= j;
		}
		sum += t;
	}
	cout << "Итог - " << sum;
	return 0;
}