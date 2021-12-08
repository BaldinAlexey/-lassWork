#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int max = 1;
	short k = 1;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (a[i] > max) 
		{
			max = a[i];
			k = 1;
		}
		else if (a[i] == max)
		{
			k++;
		}
	}
	cout << "max = " << max << endl;
	cout << "k = " << k << endl;
	return 0;
}
