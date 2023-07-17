#include <stdio.h>
/*
 * Modify the previous program in the fact
 * that add a header over the table
 */
int main() {
	float fahrenheit, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 999;
	step = 50;
	printf("FAHRENHEIT\tCELSIUS\n");
	while(fahrenheit <= upper) {
		celsius = (5.0 / 9.0) * (fahrenheit - 32);
		printf("%10.0f\t%7.2f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + step;
	}
}
