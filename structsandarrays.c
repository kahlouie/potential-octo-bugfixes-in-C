#include <stdio.h>

struct Foo {
	int a;
	int b;
};

int getA(struct Foo bar) {
	bar.a = 8;
	return bar.a;
}

void addToA(struct Foo* bar) {
	bar->a++;
}

int main() {
	// Array of ints name ka
	int ka[10];
	ka[0] = 0;
	ka[1] = 4 + ka[0];

	// Structure of type Foo named foo
	struct Foo foo;
	foo.a = 4;
	foo.b = 9;
	printf("%d\n", getA(foo));
	int a = getA(foo);
	foo.a = 6;
	printf("%d\n", foo.a);
	printf("%d\n", a);

	struct Foo baz;
	baz.a = 13;
	printf("%d\n", getA(baz));
	printf("%d\n", a);

	// Add 1 to foo.a
	foo.a = 6;
	addToA(&foo);
	printf("%d\n", foo.a);
}