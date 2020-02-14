#include <stdio.h>
#include <setbit.h>
#define LEN ULONG_MAX/8+1
int main()
{
	char list[LEN];
	for ( unsigned long i = 0; i<LEN; i++)
	{
		list[i] = 0xFF;
	}
	char *select;
	select = list;
	unsigned long st = 0;
	unsigned long k = 0;

	while ( k < ULONG_MAX )
	{
		if ( test_bit(list, k) != 0)
		{
            st = k++;
			for (; k < ULONG_MAX; k++)
			{
				if ( (k - st) % (st + 2) == 0)
				{
				     clear_bit(list, k);
				}
			}
			k = st;
		}
		k++;
	}
    int print_flag = 0;
	int m = ULONG_MAX % 8;
	for ( unsigned long i = LEN -1; m >= 0; m--)
	{
		if ( test_bit(list, 8*i+m) == 1)
		{
			printf("%ul\n", 8*i+m);
			print_flag = 1;
		}
	}
	if (print_flag != 1)
	{
		unsigned j = LEN - 2;
		while ( j >= 0 && print_flag != 1)
		{
			for ( int i = 7; i >=0; i--)
			{
				if ( test_bin(list, 8*j+i) == 1)
				{
					printf("%ul\n", 8*j+i);
					print_flag = 1;
					break;
				}
			}
		}
	}
    return 0;
}



