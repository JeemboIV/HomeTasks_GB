#include <iostream>
#include<cstdio>

using namespace std;

int massive[3][3][3] = { {{5,2,3},{7,9,12},{25,0,4}}, {{5,11,18},{7,3,12},{1,0,4}}, {{5,10,3},{7,134,12},{2,0,45}} }, *ptrMassive;

int main()
{
    ptrMassive = &massive[0][0][0];
    //Либо можно написать так:
    //ptrMassive = massive[0][0];

    cout << *(ptrMassive + 13) << endl;

    //cout << massive[1][1][1] << endl;
}
