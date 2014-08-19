#include <stdio.h>

void print_string(char* s) {
	int i = 0;
	while (s[i] != '\0') {
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
}

int addTen(int* a) {
	int accum = 0;
	for (int i = 0; i < 10; i++) {
		accum += a[i];
	}
	return accum;
}

int main(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {
		char* argument = argv[i];
		print_string(argument);
		// printf("%s\n", argument);
	}

	int k[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	printf("%d\n", addTen(k));
}