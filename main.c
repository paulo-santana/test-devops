#include <stdio.h>

int sum(int x, int y) {
	return x + y;
}

int mul(int x, int y) {
	return x * y;
}

int main(void) {
	int x = 1;
	int y = 2;
	printf("%i\n", sum(x, y));
	printf("%i\n", mul(x, y));
	return (0);
}

