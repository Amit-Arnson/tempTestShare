#pragma warning(disable: 4996)
#include <stdio.h>	

#define ARRSIZE 3

void q4() {
	int arr[ARRSIZE] = {0};
	for (int i = 0; i < ARRSIZE; i++) {
		printf("\nenter digit #%d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	printf("\nenter digit to check in array: ");
	int checkDig;
	scanf("%d", &checkDig);

	int count = 0;

	for (int i = 0; i < ARRSIZE; i++) {
		if (arr[i] == checkDig) {
			printf("in i=%d, it is equal", i);
			count++;
		}
	}

	printf("the digit %d appeared %d times in the array", checkDig, count);
}