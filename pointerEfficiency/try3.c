#include <stdio.h>
#include <time.h>

#define SIZE 10000
int x[SIZE];
int y[SIZE];
int i;
int *p1, *p2;

void try3()
{
	for ( p1 =x, p2 = y, i = 0; i < SIZE; i++)
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
		try3();
	}
	fn = clock();
	elt = (double)(fn - st) / CLOCKS_PER_SEC;

	printf("try3: %f seconds\n", elt);
	
	return 0;
}
