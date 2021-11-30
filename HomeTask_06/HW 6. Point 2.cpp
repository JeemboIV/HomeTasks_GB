#include <iostream>
#include <ctime>

using namespace std;

void ArrayPrint(int** Arr, size_t m, size_t n) {

    cout << "Значения массива: \n\n";

    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << Arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}

void FillArray(int** Arr, size_t m, size_t n) {

    srand(time(NULL));

    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            Arr[i][j] = rand() % 10 + 1;
        }
    }

    cout << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

    int** Array;
    const size_t m = 3;
    const size_t n = 3;

    Array = new int* [m];
    for (size_t i = 0; i < m; i++) {
        Array[i] = new int[n];
    }

    FillArray(Array, m, n);

    ArrayPrint(Array, m, n);
    
    for (size_t i = 0; i < m; i++) {
        delete[] Array[i];
    }
    delete[] Array;
    Array = nullptr;

    return 0;
}
