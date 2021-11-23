/*Написать программу, проверяющую что сумма двух(введенных с клавиатуры) чисел лежит
в пределах от 10 до 20 (включительно), если да – вывести строку "true", в противном случае – "false";*/

#include <iostream>

using namespace std;

float firstNumber;
float secondNumber;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Введите первое число: ";
    cin >> firstNumber;
    cout << "\nВведите второе число: ";
    cin >> secondNumber;

    if ((firstNumber + secondNumber >= 10) && (firstNumber + secondNumber <= 20)) {
        cout << "\ntrue" << endl;
    }
    else
    {
        cout << "\nfalse" << endl;
    }

}
