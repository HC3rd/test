#include <stdio.h>
#define MAX_LEN 1000
int ascii_to_integer( char *string);

int main(void)
{
	char input[MAX_LEN];
	if ( gets(input) == NULL)
		return -1;
	printf("The input number is: %d\n", ascii_to_integer(input));
	return 0;
}

int ascii_to_integer( char *str)
{
	int sum = 0;

	while ( *str != '\0')
	{
		if ( *str > '9' || *str < '0')
			return 0;
		else
		{
			sum *= 10;
			sum += (*str++ - '0');
		}
	}
	return sum;
}
