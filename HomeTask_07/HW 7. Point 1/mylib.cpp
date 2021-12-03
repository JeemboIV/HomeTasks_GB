#include <iostream>

namespace arrMyLib {

	void PrintArray(float* Array, const int size) {

		for (int i = 0; i < size; i++) {

			std::cout << Array[i] << " ";

		}

		std::cout << "\n\n";
	}

	void AnalyseArray(float* Array, const int size) {

		int CountPositive = 0;
		int CountNegative = 0;

		for (int i = 0; i < size; i++) {

			if (Array[i] >= 0) {
				CountPositive += 1;
			}
			else {
				CountNegative += 1;
			}

		}

		std::cout << "Count positive elements: " << CountPositive << std::endl;
		std::cout << "Count negative elements: " << CountNegative << std::endl;
	}

	void InitArray(float* Array, const int size) {

		for (int i = 0; i < size; i++) {
			Array[i] = i;
		}
	}

}
