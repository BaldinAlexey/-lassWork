
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int N, pr = 1;
    cin >> N;
    if (N <= 0)
        cout << "Это не натуральное число" << endl;
    else
        for (int i = 1;i <= N;i++)
            pr *= i;
    cout << pr << endl;
    return 0;
}

