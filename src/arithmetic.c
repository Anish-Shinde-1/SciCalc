#include "include/arithmetic.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void arithmetic() {
	// add a feature to keep looping the functions unless you press Q
	char operator= 'n';
	double a, result;

	printf("\n");

	for (int i = 1; operator!= 'q'; i++) {
		if (i == 1) {
			printf("Input : ");
			scanf("%lf", &a);
			result = a;
			continue;
		}

		getchar();

		printf("Operator : ");
		scanf("%c", &operator);

		if (operator== 'q') {
			break;
		} else if (operator!= '+' && operator!= '-' && operator!=
		           '*' && operator!= '/') {
			printf("INVALID INPUT\n");
			i--;
			continue;
		}
		// consumes the whitespace character in input buffer, when scanning a
		// character after scanning any other input, the whitespace character in
		// the input buffer is scanned and compiler skips ahead
		getchar();

		printf("Input : ");
		scanf("%lf", &a);

		switch (operator) {
			case '+': result = result + a; break;

			case '-': result = result - a; break;

			case '*': result = result * a; break;

			case '/':
				if (a == 0) {
					printf("INVALID INPUT!!\n");
					i--;
				} else {
					result = result / a;
				}
				break;

			case 'q': break;
		}
	}

	printf("\n");

	printf("END RESULT : %lf\n", result);

	getchar();
	getchar();
}