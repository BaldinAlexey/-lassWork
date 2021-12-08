#include <iostream>
using namespace std;
int main()
{
    int a[5];
    int max = 1;
    int min = 999;
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
        else if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "min =" << " " << min << endl;
    cout << "max =" << " " << max << endl;
    return 0;
}