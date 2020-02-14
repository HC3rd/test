#include <stdio.h>
#include <time.h>

#define SIZE 10000
int x[SIZE];
int y[SIZE];
int i;
int *p1, *p2;

void try2()
{
	for ( p1 =x, p2 = y; p1 - x < SIZE;)
		*p1++ = *p2++;
}

int main()
{
	int loop = 1000;
	clock_t st, fn;
	double elt;

	st = clock();
	while (loop--)
	{
		try2();
	}
	fn = clock();
	elt = (double)(fn - st) / CLOCKS_PER_SEC;

	printf("try2: %f seconds\n", elt);
	
	return 0;
}
