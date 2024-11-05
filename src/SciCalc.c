#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "include/arithmetic.h"
#include "include/exponent.h"
#include "include/factorial.h"
#include "include/matrix.h"

int options(int opt);

int main() {
	int opt;
	do {
		opt = options(opt);
		switch (opt) {
			case 1: arithmetic(); break;

			case 2: exponent(); break;

			case 3: factorial(); break;

			case 4: matrix(); break;
		}
	} while (opt != 5);

	return 0;
}

int options(int opt) {
	system("clear");
	printf("|=========== CALCULATOR ==========|\n");
	printf("|                                 |\n");
	printf("| 1. Arithmetic                   |\n");
	printf("| 2. Exponent                     |\n");
	printf("| 3. Factorial                    |\n");
	printf("| 4. Matrix                       |\n");
	printf("| 5. Exit                         |\n");
	printf("|                                 |\n");

	do {
		printf("Which operation do you want to execute?\nAns : ");
		scanf("%d", &opt);

		if (opt < 1 || opt > 5) {
			printf("INVALID OPTION\n");
		}
	} while (opt < 1 || opt > 5);

	return opt;
}