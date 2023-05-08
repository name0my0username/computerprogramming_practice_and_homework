//2,8,16진수
#include <stdio.h>

int main() {
	int num = 12;

	printf("10진수: %d\n", num);
	printf("8진수: %o\n", num);
	printf("16진수: %x\n", num);

	//printf("2진수: ")
	for (int i = 4; i >= 0; i--) {
		int result = num >> i & 1;
		printf("%d", result);
	}

	return 0;
}