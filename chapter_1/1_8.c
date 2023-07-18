#include <stdio.h>
// Write a program that count black spaces, tabs and new lines.
int main() {
	int c = 0;
	long blank_space_count = 0; 
	long tab_count = 0;
	long new_line_count = 0;
	while((c = getchar()) != EOF) {
		if(c == ' ') ++blank_space_count;
		else if(c == '\t') ++tab_count;
		else if(c == '\n') ++new_line_count;
	}
	printf("Blank spaces count: %ld\n", blank_space_count);
	printf("Tabs count: %ld\n", tab_count);
	printf("New lines count: %ld\n", new_line_count);
	return 0;
}
