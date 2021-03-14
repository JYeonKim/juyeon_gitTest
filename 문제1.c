#include <stdio.h>

int main() {
	int input;

	printf("입력 : ");
	scanf_s("%x", &input);

	printf("\n10진수\t : %d", input);
	printf("\n8진수\t : %o", input);

	return 0;
}