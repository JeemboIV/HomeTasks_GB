#include <iostream>

using namespace std;

struct MyVariants {
	//Объединение с переменными разных типов данных.
	union MyData
	{
		int number;
		float fraction;
		char symbol;
	};

	//Создание элемента объединения.
	MyData data;

	//Битовые флаги для переменной каждого типа данных.
	int isInt : 1;
	int isFloat : 1;
	int isChar : 1;
};

int main()
{
	//Создание элемента структуры.
	MyVariants dataCorrection{};
	
	dataCorrection.data.fraction = 3.14f;
	dataCorrection.isInt = 0;
	dataCorrection.isChar = 0;

	dataCorrection.data.symbol = 'G';
	dataCorrection.isInt = 0;
	dataCorrection.isFloat = 0;
	dataCorrection.isChar = 1;
}
