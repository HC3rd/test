#include <stdio.h>
#include <time.h>

#define SIZE 10000
int x[SIZE];
int y[SIZE];

void try5()
{
	register int *p1, *p2;

	for ( p1 =x, p2 = y; p1 < &x[SIZE];)
		*p1++ = *p2++;
}

int main()
{
	int loop = 10000;
	clock_t st, fn;
	double elt;

	st = clock();
	while (loop--)
	{
		try5();
	}
	fn = clock();
	elt = (double)(fn - st) / CLOCKS_PER_SEC;

	printf("try5: %f seconds\n", elt);
	return 0;
}
