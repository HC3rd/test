#include <stdio.h>
#include <stdarg.h>

int max_list( int arg1, ...);

int main()
{
	int arg[5] = { 0, 12234, 445, 5, -1};

	printf("The biggest number is: %d\n", max_list( arg[0], arg[1], arg[2], arg[3], arg[4]));
	 return 0;
}

int max_list(int st, ...)
{
	va_list var;
	int k;
	va_start( var, st);
	while ( (k = va_arg(var, int)) >= 0)
	{
		if ( k > st)
			st = k;
	}
	va_end( var);

	return st;
}
