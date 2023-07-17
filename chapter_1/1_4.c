#include <stdio.h>
/*
 * Write a program print the table corresponding 
 * for Celsius to Fahrenheit
 * */
int main() {
	float celsius, fahr = 0.0;
	int lower, upper, step = 0;
	upper = 10;
	step = 1;
	printf("CELSIUS\tFAHRENHEIT\n");
	while(celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32;
		printf("%7.0f\t%10.2f\n", celsius, fahr);
		celsius = celsius + step;
	}
	return 0;
}
