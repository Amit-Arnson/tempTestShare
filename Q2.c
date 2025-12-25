#pragma warning(disable: 4996)
#include <stdio.h>	

void q2() {
	int amount;
	printf("enter how many numbers you want to input: ");
	scanf("%d", &amount);

	float temp;
	float sum = 0;
	int over50 = 0;

	for (int i = 0; i < amount; i++) {
		printf("\nenter float #%d: ", i+1);
		scanf("%f", &temp);
		sum += temp;

		if (temp > 50) {
			over50++;
		}
	}

	float average = sum / amount;

	printf("average: %f, over 50: %d", average, over50);
}