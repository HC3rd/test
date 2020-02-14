#include <stdio.h>
#include "increment.h"
#include "negate.h"

int main()
{
	int args[3] = {10, 0, -10};
	for (int i = 0; i < 3; i++)
	{
		printf("%d\t%d\n", increment(args[i]), negate(args[i]));
	}
}
