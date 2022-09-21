#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	double height, BMI, BMI_h, weight;


	printf("Enter your weight(kg) and height(cm) : ");
	scanf_s("%lf%lf", &weight, &height);
	BMI_h = height / 100;									// h^2
	BMI = weight / (BMI_h * BMI_h);
	printf("Your BMI is %.1lf\n", BMI);					//show calculated BMI
	if (20 <= BMI && BMI < 25) {
		printf("You've average BMI.");
	}
	else {
		printf("Need to take care of your weigt.");
	};

	return 0;
};