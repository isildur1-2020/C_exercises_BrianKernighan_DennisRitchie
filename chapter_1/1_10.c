#include <stdio.h>
// Write a programa that copy input to output, replacing each tab for \t,
// each recoil por \b and each diagonal inverse for \\.
int main() {
	int c = 0;
	while((c = getchar()) != EOF) {
		if(c == '\t') {
			putchar('\\');
			putchar('t');
		} else if(c == '\b') {
			putchar('\\');
			putchar('b');
		} else if(c == '\\') {
			putchar('\\');
			putchar('\\');
		}
		else printf("%c", c);
	}
	return 0;
}
