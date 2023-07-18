#include <stdio.h>
int main() {
	int c = 0;
	long lc = 0;
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			++lc;
		}
	}
	printf("Lines count: %ld\n", lc);
	return 0;
}
