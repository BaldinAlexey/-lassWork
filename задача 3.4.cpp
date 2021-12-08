#include <iostream>
using namespace std;
int main()
{
	int a[5];
	int max = 1;
	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "max =" << " " << max << endl;
	return 0;
}