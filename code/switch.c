#include <stdio.h>

int main() {
	int a = 10;
	switch (a) {
		case 1:
			printf("a = 1\n");
		case 2:
			printf("a = 2\n");
			break;
		case 3:
			printf("a = 3\n");
			break;
		case 4:
			printf("a = 4\n");
			break;
		case 5:
			printf("a = 5\n");
			break;
		default:
			printf("a = %d\n", a);
			break;
	}
}