#include <stdio.h>
#include <string.h>

/* This program reads mutiple lines from standard input.
 * and only output the longest line to standard output.
 * Assume each line will not extend 1000 characters.
 */

#define MAX_LEN 1000

int main()
{
	char input[MAX_LEN];
	char output[MAX_LEN];
	int cnt = 0;
	
	while ( gets(input) != NULL){
		if ( strlen(input) > cnt){
			cnt = strlen(input);
			strcpy(output, input);
		}
	}
	output[strlen(output)] = '\0';
	printf("The longest line is:\n");
	printf("%s\n", output);
	return 0;
}

	
