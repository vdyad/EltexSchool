#include <stdio.h>

struct test{
	char a;
	int b;
} __attribute__((packed));

int main (void){	

	unsigned char a[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};	

	struct test *t1 = (struct test *) &a;

	printf("t1 a = %c\n", t1->a);
	printf("t1 b = %d\n", t1->b);

	t1++;	

	printf("t1++ a = %c\n", t1->a);
	printf("t1++ b = %d\n", t1->b);
	
	return 0;
}
