#include <stdio.h>
#include <time.h>

#define SIZE 10000
int x[SIZE];
int y[SIZE];
int i;
int *p1, *p2;

void try1()
{
	for (i = 0; i < SIZE; i++)
		x[i] = y[i];
}
int main()
{
	int loop = 1000;
	clock_t st, fn;
	double elt;

	st = clock();
	while (loop--)
	{
		try1();
	}
	fn = clock();
	elt = (double)(fn - st) / CLOCKS_PER_SEC;

	printf("try1: %f seconds\n", elt);
	return 0;
}
