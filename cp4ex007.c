#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000
void deblank( char string[]);

int main()
{
	printf("Please enter a string:\n");
	char input[MAX_LEN];
    // scanf("%s", input);  // scanf can't accept while space!!!
	if (gets(input) == NULL)
	{
		printf("Invalid input, program exit.");
	}
	// while (getchar() != '\n')
	//	;
	deblank(input);
	printf("After deblank the orignal string:\n");
	printf("%s\n", input);

}

#if 0
void deblank( char string[])
{
	int index = 0;
	int len = 0;
	for ( ; string[len] != '\0'; len++);
	while (string[index] != '\0')
	{
		if (string[index] == ' ')
		{
			int i = 1;
			while ( index+i < len && string[index+i] == ' ')
			{
				i++;
			}
			if ( i!= 1)    // more than one space
			{
				strncpy( string+index+1, string+index+i, len-index-i+1);
				len = len-i+1;
			}
			// string[len] = '\0';
			index+=2;
			continue;
		}
		index++;
	}
}
#endif

/*
 * Shrink runs of white space in the given string to a single space.
 */
#define NUL '\0'

void deblank( char string[])
{
	char *dest;
	char *src;
	int ch;

	/*
	 * Set source and destination pointers to beginning of the string, then
	 * move to 2nd character in string.
	 */
	src = string;
	dest = string++;

	/*
	 * Examine each character from the source string.
	 */
	while ((ch = *src++) != NUL){
		if (is_white(ch)){
			/*
			 * We found white space. If we're at the beginning of
			 * the string OR the previous char in the dest is not
			 * white space, store a blank.
			 */
			if ( src == string || !is_white( dest[-1]))
				*dest++ = ' ';
		}
		else {
			/*
			 * Not white space: just store it.
			 */
			*dest++ = ch;
		}
	}
	*dest = NUL;
}

int is_white( int ch)
{
	return ch == ' ' || ch == '\t' || ch == '\v' || ch == '\f' || ch == '\n'
		|| ch == '\r';
}



