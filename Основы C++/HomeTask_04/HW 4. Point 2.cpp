/*Написать программу, выводящую на экран строку “true”, если две целочисленные константы, 
объявленные в её начале либо обе равны десяти сами по себе, либо их сумма равна десяти. Иначе "false".*/

#include <iostream>

using namespace std;

const int A = 10;
const int B = 10;

int main()
{
    setlocale(LC_ALL, "ru");

    cout << "Константа A = " << A;
    cout << "\nКонстанта B = " << B;

    if (((A == 10) && (B == 10)) || ((A + B) == 10)) {
        cout << "\n\ntrue" << endl;
    }
    else
    {
        cout << "\n\nfalse" << endl;
    }
}
