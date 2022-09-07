#include <stdio.h>

int main(void) {

	int a;
	int b;
	int c;

	a = 5;
	
	printf("voer een heel getal in:\n");
	scanf_s("%d", &b);
	
	c = a * b;

	printf(" %d\n", c);

	if (c < 25) {
		printf("je hebt gewonnen!");

	}
	else {
		printf("je hebt verloren");
	}
	return 0;
}