#include <stdio.h>

int main() {
	int a, b, c;
	while (1) {
		printf("Enter three odd number : ");
		scanf("%d %d %d", &a, &b, &c);
		if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0) {
			printf("enter again\n");
		} else {
			int i = (a >= b) ? (a >= c ? a : c) : (b >= c ? b : c);
			for (int j = 0; j <= i; j++) {
				if (j < a) { // a ---------------------------------------
					for (int k = 0; k < a - j - 1; k++) printf("-");
					for (int k = 0; k < j * 2 + 1; k++) printf("*");
					for (int k = 0; k < a - j - 1; k++) printf("-");
				} else if (j == a) {
					for (int k = 0; k < a - 1; k++)	printf("-");
					printf("*");
					for (int k = 0; k < a - 1; k++)	printf("-");
				} else {
					for (int k = 0; k < a * 2 - 1; k++) printf(" ");
				}

				printf(" ");

				if (j < b) { // b ---------------------------------------
					for (int k = 0; k < b - j - 1; k++) printf("-");
					for (int k = 0; k < j * 2 + 1; k++) printf("*");
					for (int k = 0; k < b - j - 1; k++) printf("-");
				} else if (j == b) {
					for (int k = 0; k < b - 1; k++)	printf("-");
					printf("*");
					for (int k = 0; k < b - 1; k++)	printf("-");
				} else {
					for (int k = 0; k < b * 2 - 1; k++) printf(" ");
				}

				printf(" ");

				if (j < c) { // c ---------------------------------------
					for (int k = 0; k < c - j - 1; k++) printf("-");
					for (int k = 0; k < j * 2 + 1; k++) printf("*");
					for (int k = 0; k < c - j - 1; k++) printf("-");
				} else if (j == c) {
					for (int k = 0; k < c - 1; k++)	printf("-");
					printf("*");
					for (int k = 0; k < c - 1; k++)	printf("-");
				} printf(" ");

				printf("\n");
			}
		}
	}

	return 0;
}
