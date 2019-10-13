#include<stdio.h>
#include<stdlib.h>

int main() {
	float weight, height, bmi;
	printf("Enter your weight : ");
	scanf_s("%f", &weight);
	printf("Enter your height : ");
	scanf_s("%f", &height);
	bmi = (weight) / (height * height);
	printf(" BMI is %f.\n", bmi);
	if (bmi < 18.5) {
		printf(" Underweight\n");
	}
	if (bmi >= 18.5 && bmi <= 24.9) {
		printf(" Normal\n");
	}
	if (bmi >= 25 && bmi <= 29.9) {
		printf(" Overweight\n");
	}
	if (bmi >= 30) {
		printf(" Obese\n");
	}
	return 0;
}