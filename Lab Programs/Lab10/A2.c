#include <stdio.h>

int main() {
	int nCount;
	float n;
	float sum = 0.0;
    float  average;

	printf("How many numbers do you want to enter? ");
	scanf("%d", &nCount);

	if (nCount <= 0) {
		printf("Please enter at least one number.\n");
	}

	for (int i = 1; i <= nCount; i++) {
		printf("Enter number %d: ", i);
		scanf("%f", &n);
		sum = sum + n;
	}

    average = sum / nCount;

	printf("Sum = %.2f\n", sum);
	printf("Average = %.2f\n", average);

	return 0; 

}