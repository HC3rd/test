#include <stdio.h>
#include <stdlib.h>

/* This program reads standard input, and adds a line number at each lines begining,
 * then output each lines to standard output.
 */

int main ()
{
	int ch;
	int line = 0;
	int stFlag = 1;
	while ((ch = getchar()) != EOF)
	{
		if (stFlag == 1)
		{
			stFlag = 0;
			line += 1;
			printf("%d", line);
		}
		putchar(ch);
		if (ch == '\n')
			stFlag = 1;
	}
	return EXIT_SUCCESS;
}

