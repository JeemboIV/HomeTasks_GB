#include <iostream>

using namespace std;

#define SIZE 5

#define SwapINT(a, b) {\
    a = a ^ b;\
    b = a ^ b;\
    a = a ^ b;\
}

void MyArraySort(int* MyArray) {

    bool Flag = true;
    int t = 0;

    while (Flag) {
        Flag = false;
        for (int i = 0; i < SIZE-1; i++) {

            if (MyArray[i] > MyArray[i + 1]) {

                SwapINT(MyArray[i], MyArray[i + 1]);

                Flag = true;
            }
        }

        cout << "Массив после одного прохода цикла\n";
        for (int i = 0; i < SIZE; i++) {
            cout <<  MyArray[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "ru");

    int MyArray[SIZE];

    cout << "Введие значения массива через пробел: ";

    for (int i = 0; i < SIZE; i++) {
        cin >> MyArray[i];
    }

    MyArraySort(MyArray);

    return 0;
}
