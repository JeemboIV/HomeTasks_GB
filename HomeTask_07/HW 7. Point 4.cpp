#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#pragma pack(push, 1)
struct Employee {
    int age;
    string Name;
    string Specialization;
    string Departament;
};
#pragma pack(pop)

int main()
{
    setlocale(LC_ALL, "ru");

    Employee *Employee1 = new Employee;

    Employee1->age = 21;
    Employee1->Name = "Paul";
    Employee1->Specialization = "C++ programmer";
    Employee1->Departament = "Development Department";

    cout << "Name: " << Employee1->Name << endl;
    cout << "Age: " << Employee1->age << endl;
    cout << "Specialization: " << Employee1->Specialization << endl;
    cout << "Departament: " << Employee1->Departament << endl << endl;

    cout << "Размер структуры: " << sizeof(Employee1) << " байт.";

    ofstream file("Employee1.txt");

    file << "Name: " << Employee1->Name << endl;
    file << "Age: " << Employee1->age << endl;
    file << "Specialization: " << Employee1->Specialization << endl;
    file << "Departament: " << Employee1->Departament << endl << endl;
    file << sizeof(Employee1);
    
    delete Employee1;

    return 0;
}
