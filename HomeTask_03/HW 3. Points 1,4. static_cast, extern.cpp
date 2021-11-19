#include <iostream>

using namespace std;

extern const int a;
extern const int b;
extern const int c;
extern const int d;

float Result;

int main()
{
    
    Result = a * (b + (static_cast <float> (c) / d));

    cout << Result << endl;

}
