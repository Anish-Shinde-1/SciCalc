#include "include/factorial.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


void factorial() {
	double f = 1;
	double n;
	printf("Enter the number : ");
	scanf("%lf", &n);

	for (int i = 1; i <= n; i++) {
		f *= i;
	}

	printf("Factorial of %lf is %lf\n", n, f);

	getchar();
	getchar();
}