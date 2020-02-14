#include <stdio.h>

void matrix_multiply( int *m1, int *m2, int *r,
		int x, int y, int z)
{
	int i,j,k;
	for ( i=0; i<x; i++)
	{
		for ( j=0; j<z; j++)
		{
			int *p1 = m1 + i * y;
			int *p2 = m2 + j;
			for ( k=0; k<y; k++)
			{
				*r += *p1 * *p2;
				p1++;
				p2 += z;
			}
			r++;
		}
	}
}

int main(void)
{
	int m1[3][2] = {{2, -6}, {3, 5}, {1,-1}};
	int m2[2][4] = {{4, -2, -4, -5}, {-7, -3, 6, 7}};
	int r[3][4] = {0};
	matrix_multiply(m1,m2,r,3,2,4);
	for ( int i = 0; i < 3; i++)
	{
		for ( int j = 0; j < 4; j++)
			printf("%d\t", r[i][j]);
		printf("\n");
	}
	return 0;
}
