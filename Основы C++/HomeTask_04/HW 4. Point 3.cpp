/*Написать программу которая выводит на экран список всех нечетных чисел он 1 до 50.
Например: "Your numbers: 1 3 5 7 9 11 13 …".*/

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Ряд нечетных чисел в диапазоне от 1 до 50: ";

    for (int i = 1; i < 50; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
}
