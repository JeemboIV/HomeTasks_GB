//Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [ 1, 1, 0, 0, 1, 0, 1, 1, 0, 0 ].
//Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0.
//Выводить на экран массив до изменений и после.

#include <iostream>

using namespace std;

void PrintArray(bool* Arr, int size)
{
    cout << "Значения массива: ";

    for (size_t i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;
}

void Inverting(bool* Arr, int size)
{
    cout << "Значения массива инвертированы:\n" << endl;

    for (size_t i = 0; i < size; i++) {
        if (Arr[i] == 0) {
            Arr[i] = 1;
        }
        else {
            Arr[i] = 0;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    bool Massive[] = { 0,1,1,0,1,0,0,1,0,0,0,1 };
    
    PrintArray(Massive, sizeof(Massive)/sizeof(bool));

    Inverting(Massive, sizeof(Massive) / sizeof(bool));

    PrintArray(Massive, sizeof(Massive) / sizeof(bool));
}
