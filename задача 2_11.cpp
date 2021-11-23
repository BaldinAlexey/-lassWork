#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int n, i, tmp;
    bool answerFound = false;

    cout << "Введите длину последовательности:\n";
    cin >> n;
    i = 1;

    while (i <= n && !answerFound)
    {
        cin >> tmp;
        if (tmp == 0)
        {
            i++;
        }
        else
        {
            answerFound = true;
        }
    }

    if (tmp > 0)
    {
        cout << "Сначала ввели положительное число";
    }
    else
    {
        cout << "Сначала ввели отрицательное число";
    }
    return 0;
}
