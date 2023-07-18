#include <stdio.h>
// Write a program that copy input to output, replacing each stream of blank
// spaces into only one
int main() {
	int c = 0;
	int blank_count = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') ++blank_count;
		else blank_count = 0;
		if(blank_count <= 1) printf("%c", c);
	}
	return 0;
}
