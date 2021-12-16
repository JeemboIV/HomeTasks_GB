#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    string file1;
    string file2;

    cout << "Укажите название первого файла: ";
    cin >> file1;
    cout << "Укажите название второго файла: ";
    cin >> file2;

    file1 += ".txt";
    file2 += ".txt";

    ofstream fout1(file1);
    ofstream fout2(file2);

    const size_t size1 = 50;
    int array1[size1];

    const size_t size2 = 75;
    int array2[size2];

    srand(time(NULL));

    for (int i = 0; i < size1; i++) {
        array1[i] = rand() % 50;
    }

    for (int i = 0; i < size2; i++) {
        array2[i] = rand() % 100;
    }

    int i = 0;
    for (int element : array1)
    {
        fout1 << "elem[" << i++ << "]=" << element << endl;
    }

    fout1.close();
    
    i = 0;
    for (int element : array2)
    {
        fout2 << "elem[" << i++ << "]=" << element << endl;
    }
    fout2.close();
    return 0;

}
