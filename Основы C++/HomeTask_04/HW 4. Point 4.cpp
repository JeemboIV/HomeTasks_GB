//Написать программу, проверяющую, является ли некоторое число - простым.

#include <iostream>

using namespace std;

int primeNumber;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Задайте число: ";
    cin >> primeNumber;

    for (int i = 2; i < primeNumber; i++)
    {
        if (primeNumber % i == 0) {
            cout << "\n\nЧисло не является простым.";
            break;
        }
        else if (i == primeNumber - 1)
        {
            cout << "\n\nЧисло является простым.";
        }
    }
}
