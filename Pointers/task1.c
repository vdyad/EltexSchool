#include <stdio.h>

int main (void){

	unsigned int a = 0xAABBCCDD;
	unsigned char *ptr;
	ptr = (unsigned char *) &a;

	for (int i = 4; i > 0; --i){

		printf("%d byte of a = 0x%X\n", i, *ptr);
		ptr++;
	}

	return 0;

}
