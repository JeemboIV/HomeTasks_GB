#include <iostream>
#include "mylib.h"

int main()
{
    const int SIZE = 10;

    float Massive[SIZE];

    arrMyLib::InitArray(Massive, SIZE);

    arrMyLib::PrintArray(Massive, SIZE);

    arrMyLib::AnalyseArray(Massive, SIZE);

    return 0;
}
