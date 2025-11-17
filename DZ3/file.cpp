#include <iostream>
#include <cmath>
#include "Header.h"

void filemake() {
	FILE* F;
	FILE* G;
	int k;
	char strs[100][100];
	std::cout << "¬ведите кол-во строк < 100 \n";
	std::cin >> k;
	for (int i = 0; i < k; i++) {
		sprintf_s(strs[i], "Ain't no way i pass AIP exam N%d\n", i);
	}

	fopen_s(&F, "F.txt", "w+b");
	for (int i = 0; i < k; i++) {
		fputs(strs[i], F);
	}

	fopen_s(&G, "G.txt", "w+b");
	for (int i = k - 1; i >= 0; i--) {
		fputs(strs[i], G);
	}
	fclose(F);
	fclose(G);
}