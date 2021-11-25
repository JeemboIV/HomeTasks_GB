//Написать функцию которая выводит массив double чисел на экран.
//Параметры функции это сам массив и его размер. 
//Вызвать эту функцию из main.

#include <iostream>

using namespace std;

void PrintArray(double *Arr, int size) 
{
    cout << "Значения массива: ";

    for (size_t i = 0; i < size; i++) 
    {
        cout << Arr[i] << " ";
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    double Array[] = { 1,2,8,5,6,2,1,4,5,4 };

    PrintArray(Array, sizeof(Array)/sizeof(double));

    return 0;
}
