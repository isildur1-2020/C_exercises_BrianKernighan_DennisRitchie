#include <stdio.h>
/*
 * Modify the temperatures conversion program that
 * writes the table in reverse order, namely, from 300 to 0.
 */
int main() {
	printf("FAHRENHEIT\tCELSIUS\n");
	for(int fahr = 1000; fahr >= 0; fahr = fahr - 50)
		printf("%10d\t%7.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
	return 0;
}
