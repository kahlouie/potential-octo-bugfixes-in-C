#include "stdio.h"
int
main() {
	int first = 0;
	int second = 1;
	int third;
	printf("%d\n", third);
	for(int i = 0; i < 10; i++) {
		if(i == 0 || i == 1) {
			printf("%d\n", i);
		} else {
			third = first + second;
			printf("%d\n", third);
			first = second;
			second = third;
		}
	}
}