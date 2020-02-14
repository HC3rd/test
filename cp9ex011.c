#include <stdio.h>
#include <string.h>

#define LEN 1000

int count_the( char *str)
{
	char sep[] = " \t\f\r\v\n";
	int cnt;
	char *p = strtok( str, sep);

	while ( p!=NULL)
	{
		if ( strcmp( p,"the") == 0)
			cnt++;
		p = strtok( NULL, sep);
	}
	return cnt;
}
int main(void)
{
	char buf[LEN];
	if ( fgets(buf, LEN, stdin) == NULL)
		return -1;

	printf("There are %d \"the\"\n", count_the(buf));
	return 0;
}
