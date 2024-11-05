#include "include/exponent.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void exponent() {
	double x, result, base, expo;
	int opt2;

	do {
		system("clear");
		printf("|=========== CALCULATOR ==========|\n");
		printf("|                                 |\n");
		printf("| 1. Power                        |\n");
		printf("| 2. Exponential                  |\n");
		printf("| 3. Logarithmic                  |\n");
		printf("| 4. Exit                         |\n");
		printf("|                                 |\n");

		do {
			printf("\nEnter your choice : ");
			scanf("%d", &opt2);

			if (opt2 < 1 || opt2 > 4) {
				printf("INVALID OPTION\n");
			}

		} while (opt2 < 1 || opt2 > 4);

		if (opt2 == 1) {
			printf("Enter the base : ");
			scanf("%lf", &base);

			printf("Enter the exponent : ");
			scanf("%lf", &expo);

			result = pow(base, expo);

			printf("END RESULT : %lf\n", result);

			getchar();
			getchar();
		}

		else if (opt2 == 2) {
			printf("Enter the value : ");
			scanf("%lf", &x);

			result = exp(x);

			printf("END RESULT : %lf\n", result);
			getchar();
			getchar();

		}

		else if (opt2 == 3) {
			printf("Enter the value : ");
			scanf("%lf", &x);

			result = log(x);

			printf("END RESULT : %lf\n", result);
			getchar();
			getchar();
		}

	} while (opt2 != 4);
}