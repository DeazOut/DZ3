#include <iostream>
#include <iomanip>
#include <cmath>
#include "Header.h"

int main() {
	setlocale(0, "russian");
	int n;
	std::cout << "Введите часть задания 1 - Стек, 2 - Файл, 0 для выхода\n ";
	std::cin >> n;

	switch (n) {
	case(1): {
		int k;
		std::cout << "Введите кол-во символов в списке\n";
		std::cin >> k;
		stack(k);
		break;
		}
	case(2): {

		break;
	}
	case(0): {
		std::cout << "Выход";
		break;
	}
	}


	return 0;
}