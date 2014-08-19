#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	// int var = atoi(argv[1]);
	char* sevenByteThing = malloc(8);
	sevenByteThing[0] = 'a';
	sevenByteThing[1] = 'b';
	sevenByteThing[2] = 'c';
	sevenByteThing[3] = 'd';
	sevenByteThing[4] = 'e';
	sevenByteThing[5] = 'f';
	sevenByteThing[6] = 'g';
	sevenByteThing[7] = '\0';
	printf("%s\n", sevenByteThing);
	free(sevenByteThing);
	printf("%s\n", sevenByteThing);
}