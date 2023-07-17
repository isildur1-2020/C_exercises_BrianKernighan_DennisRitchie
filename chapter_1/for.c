#include <stdio.h>
#define LOWER 0
#define UPPER 1000
#define STEP 50
int main() {
	for (int fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
	return 0;
}
