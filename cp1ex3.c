#include <stdio.h>
#include <stdlib.h>

/* This program reads from standard input,
 * sum every character's ASCII value,
 * and print the sum value.
 */

int main()
{
	int ch;
	signed char c = -1;
	while ((ch = getchar()) != EOF){
		c += (char)ch;
	}
	printf("%d\n", ch = c);
	return 0;
}
