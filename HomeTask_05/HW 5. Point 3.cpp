//Задать пустой целочисленный массив размером 8. 
//Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22.
//Вывести массив на экран.

#include <iostream>

using namespace std;

void PrintArray(int* Arr, int size)
{
    cout << "Значения массива: ";

    for (size_t i = 0; i < size; i++)
    {
        cout << Arr[i] << " ";
    }

    cout << endl;
}

void Fill(int* Arr, int size)
{
    for (size_t i = 0; i < size; i++) {
        if (i == 0) {
            Arr[i] = 1;
        }
        else {
            Arr[i] = Arr[i - 1] + 3;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int Array[8];

    Fill(Array, sizeof(Array) / sizeof(int));

    PrintArray(Array, sizeof(Array) / sizeof(int));
}