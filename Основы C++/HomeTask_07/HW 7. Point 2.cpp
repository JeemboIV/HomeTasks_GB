#include <iostream>

#define CHECK(m, n) (((n >= 0) && (n < m)) ? cout << "Число входит в диапазон." : cout << "Число не входит в диапазон.")

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    unsigned int m;
    unsigned int n;

    cout << "Введите верхнюю границу диапазона: ";

    cin >> m;

    cout << "Введите число для проверки принадлежности диапазону: ";

    cin >> n;

    CHECK(m, n);

    return 0;
}
