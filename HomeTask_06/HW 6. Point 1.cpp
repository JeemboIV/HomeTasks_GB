#include <iostream>
#include <math.h>

using namespace std;

void ArrayPrint(int* Arr, int size) {

    cout << "Значения массива: ";

    for (int i = 0; i < size; i++) {
        cout << Arr[i] << " ";
    }
    
    cout << endl;
}

void FillArray(int* Arr, int size) {

    for (int i = 0; i < size; i++) {
        Arr[i] = pow(2,i);
    }

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int* Array1;
    int quantityElements;

    cout << "Введите размер вашего массива: ";
    cin >> quantityElements;

    if (quantityElements > 0)
    {
        Array1 = new (nothrow) int[quantityElements];
        if (Array1 != nullptr) {

            cout << "Массив размером " << quantityElements << " создан.\n\n";

            FillArray(Array1, quantityElements);

            ArrayPrint(Array1, quantityElements);

            delete[] Array1;
            Array1 = nullptr;

            cout << "Память, занимаемая массивом, очищена.\n\n";
        }
        else
        {
            cout << "Ошибка! Не удалось выделить память." << endl;
        }
    }

}
