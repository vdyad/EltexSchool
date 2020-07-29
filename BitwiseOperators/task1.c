#include <stdio.h>

int main(void){
        unsigned int a = 0xAABBCCDD;
        unsigned char c;
        int d = 0;
	
	printf("a = 0x%X\n", a);

        for (int i = 1; i < 5; ++i){

                c = ((a >> d) & 0x000000FF);
                printf("%d byte of a = 0x%X\n", i, c);
                d += 8;
        }     

        return 0;
}
