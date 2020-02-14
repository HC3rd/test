#include <stdio.h>

int main(void)
{
	int a[10];
	int *c;
	c=a;
	printf("the size of array is %ld", sizeof(a));
	printf("the size of pointer is %ld", sizeof(c));
	return 0;
}
