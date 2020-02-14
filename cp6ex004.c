#include <stdio.h>

int main()
{
	char list[1000];
	for ( int i = 0; i<1000; i++)
	{
		list[i] = 1;
	}
	char *select;
	select = list;
	int mod = 2;
	char *st;

	while ( select < &list[1000])
	{
		if ( *select != 0)
		{
            st = select++;
			for (; select < &list[1000]; select++)
			{
				if ( (select - st) % (st - list + 2) == 0)
				{
				    *select = 0;
				}
			}
			select = st;
		}
		select++;
	}

	for ( int i=0; i < 1000; i++)
	{
		if ( list[i] == 1)
			printf("%d ", i+2);
	}
	printf("\n");
    return 0;
}



