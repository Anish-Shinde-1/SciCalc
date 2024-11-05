#include "include/matrix.h"

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void matrix() {
	int opt6;
	do {
		system("clear");
		printf("|====================== CALCULATOR ======================|\n");
		printf("|                                                        |\n");
		printf("| 1. Define Matrix A                                     |\n");
		printf("| 2. Define Matrix B                                     |\n");
		printf("| 3. Transpose Matrix (Matrix A)                         |\n");
		printf("| 4. Multiplication of Matrix (Matrix A * Matrix B)      |\n");
		printf("| 5. Determinant of Matrix (Matrix A)                    |\n");
		printf("| 6. Exit                                                |\n");
		printf("|                                                        |\n");

		do {
			printf("\nEnter your choice : ");
			scanf("%d", &opt6);

			if (opt6 < 1 || opt6 > 7) {
				printf("INVALID OPTION\n");
			}
		} while (opt6 < 1 || opt6 > 7);

		int rA;
		int cA;

		int rB;
		int cB;

		double matA[3][3];
		double matB[3][3];

		if (opt6 == 1) {
			do {
				printf("Enter the number of rows for Matrix A (1 - 3) : ");
				scanf("%d", &rA);

				printf("Enter the number of coloums for Matrix A (1 - 3) : ");
				scanf("%d", &cA);

				if (rA < 1 || rA > 3 || cA < 1 || cA > 3) {
					printf("INVALID OPTION\n");
				}

			} while (rA < 1 || rA > 3 || cA < 1 || cA > 3);

			for (int xA = 0; xA < rA; xA++) {
				for (int yA = 0; yA < cA; yA++) {
					printf("Enter the element of (%d,%d) :", xA + 1, yA + 1);
					scanf("%lf", &matA[xA][yA]);
				}
			}

			printf("Matrix A : \n");
			for (int xA = 0; xA < rA; xA++) {
				printf("| ");

				for (int yA = 0; yA < cA; yA++) {
					printf("%0.1lf ", matA[xA][yA]);
				}

				printf("|\n");
			}

			Sleep(1);
			getchar();
			getchar();
		}

		if (opt6 == 2) {
			do {
				printf("Enter the number of rows for Matrix B (1 - 3) : ");
				scanf("%d", &rB);

				printf("Enter the number of coloumns for Matrix B (1 - 3) : ");
				scanf("%d", &cB);

				if (rB < 1 || rB > 3 || cB < 1 || cB > 3) {
					printf("INVALID OPTION\n");
				}

			} while (rB < 1 || rB > 3 || cB < 1 || cB > 3);

			printf("Enter the number of rows for Matrix B : ");
			scanf("%d", &rB);

			printf("Enter the number of coloumns for Matrix B : ");
			scanf("%d", &cB);

			for (int xB = 0; xB < rB; xB++) {
				for (int yB = 0; yB < cB; yB++) {
					printf("Enter the element of (%d,%d) : ", xB + 1, yB + 1);
					fflush(stdout);
					scanf("%lf", &matB[xB][yB]);
				}
			}

			printf("Matrix B : \n");
			for (int xB = 0; xB < rB; xB++) {
				printf("| ");

				for (int yB = 0; yB < cB; yB++) {
					printf("%0.1lf ", matB[xB][yB]);
				}

				printf("|\n");
			}

			Sleep(1);
			getchar();
			getchar();
		}

		if (opt6 == 3) {
			double temp[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
			for (int i = 0; i < rA; i++) {
				for (int j = 0; j < cA; j++) {
					temp[j][i] = matA[i][j];
				}
			}

			printf("\nTransposed Matrix  : \n");
			for (int k = 0; k < rA; k++) {
				printf("| ");

				for (int l = 0; l < cA; l++) {
					printf("%lf ", temp[k][l]);
				}

				printf("|\n");
			}

			Sleep(1);
			getchar();
			getchar();
		}

		if (opt6 == 4) {
			if (cA != rB) {
				printf(
				    "The coloums of Matrix A and rows of Matrix B are not "
				    "equal!");
				getchar();
				getchar();
				continue;
			} else {
				double multiplied[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
				double sum = 0;

				for (int i = 0; i < rA; i++) {
					for (int j = 0; j < cA; j++) {
						for (int k = 0; k < rA; k++) {
							multiplied[i][j] =
							    multiplied[i][j] + (matA[i][k] * matB[k][j]);
						}
					}
				}

				printf("\nResultant Matrix  : \n");
				for (int q = 0; q < rA; q++) {
					printf("| ");

					for (int p = 0; p < cA; p++) {
						printf("%lf ", multiplied[q][p]);
					}

					printf("|\n");
				}

				Sleep(1);
				getchar();
				getchar();
			}
		}

		if (opt6 == 5) {
			double determinant;

			if (rA == cA) {
				if (rA == 1) {
					determinant = matA[0][0];
				}

				if (rA == 2) {
					determinant =
					    ((matA[0][0] * matA[1][1]) - (matA[0][1] * matA[1][0]));
				}

				if (rA == 3) {
					determinant = matA[0][0] * ((matA[1][1] * matA[2][2]) -
					                            (matA[1][2] * matA[2][1])) -
					              matA[0][1] * ((matA[1][0] * matA[2][2]) -
					                            (matA[1][2] * matA[2][0])) +
					              matA[0][2] * ((matA[1][0] * matA[2][1]) -
					                            (matA[1][1] * matA[2][0]));
				}

				printf("Determinant of Matrix : %lf\n", determinant);
				Sleep(1);
				getchar();
				getchar();
			}

			else {
				printf("Matrix A is not a square matrix\n");
				Sleep(1);
				getchar();
				getchar();
			}
		}

	} while (opt6 != 6);
}