#include <iostream>

using namespace std;

int number;
int result;

int main()
{
    setlocale("LC_ALL", ru);
    
    cout << "Задайте целочисленное значение: ";
    cin >> number;

    result = (number <= 21) ? number - 21 : 2 * (number - 21);
    
    cout << result << endl;

    //Либо вывести по модулю
    //cout << "\n\nМодуль разницы:\n" << abs(result) << endl;
}
