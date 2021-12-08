#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int const n = 5;
    bool flag = true;
    int a[n];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] < a[i - 1]) { flag = false; }
    }
    if (flag)
    {
        cout << "Массив упорядочен!" << endl;
    }
    else
    {
        cout << "Массив не упорядочен!" << endl;
    }
    return 0;
}