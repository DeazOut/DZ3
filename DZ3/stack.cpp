#include <iostream>
#include <cmath>
#include "Header.h"

void stack(int k) {
	std::cout << "¬ведите эл-ты\n";
	el* last = nullptr;

	for (int i = 0; i < k; i++) {
		double x;
		std::cin >> x;
		el* elem = new el;
		elem->num = x;
		elem->next = last;
		last = elem;
	}

	
	if (last != nullptr && last->next != nullptr) {
		el* prev = last;
		el* cur = last->next;
		while (cur->next != nullptr) {
			el* next = cur->next;
			double r = prev->num / next->num;
			el* insrt = new el;
			insrt->num = r;

			prev->next = insrt;
			insrt->next = cur;

			prev = cur;
			cur = cur->next;
		}

	}
	std::cout << "»тоговый список:\n";
	el* p = last;
	while (p != nullptr) {
		std::cout << p->num << ' ';
		p = p->next;
	}

	while (last != nullptr) {
		el* tmp = last;
		last = last->next;
		delete tmp;
	}
}