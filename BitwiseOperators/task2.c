#include <stdio.h>

int main(void){
	unsigned int a = 0xAABBCCDD;

	printf("the first number: %X\n", a);
	a = (a & 0xFF00FFFF);
	a = (a | 0xAAEECCDD);
	printf("the final number: %X\n", a);

	return 0;
}
