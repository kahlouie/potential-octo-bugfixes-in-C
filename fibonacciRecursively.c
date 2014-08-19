#include "stdio.h"

int recursiveness(int n) {
	if(n == 0) {
		return n;
	} else if(n == 1 || n == 2) {
		return 1;
	} else {
		return recursiveness(n - 1) + recursiveness(n - 2);
	}
}

int main() {
	printf("%d", recursiveness(9));
}