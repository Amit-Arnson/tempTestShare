#pragma warning(disable: 4996)
#include <stdio.h>	

void q1() {
	int amount = 20;
	int input;
	for (int i = 0; i < amount; i++) {
		printf("enter 1 for heads, 2 for tails: ");
		scanf("%d", &input);
		char* output = input == 1 ? "heads" : "tails";
		printf("\nyou landed on: %s\n", output);
	}
}