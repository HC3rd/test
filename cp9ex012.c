#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define TRUE 1
#define FALSE 0
#define LEN 1000

int prepare_key(char *key);

int main(void)
{
	char buf[LEN];
	if (fgets( buf, LEN, stdin) == NULL)
		return -1;
	int chr;
	if ( buf[strlen(buf)-1] == '\n')
		buf[strlen(buf)-1] = '\0';
	prepare_key(buf);

	return 0;
}










int prepare_key(char *key)
{
	if (key == NULL)
		return FALSE;
	int len = strlen(key);
	for (int i=0; i<len; i++)
	{
		if ( !isalpha(key[i]))
		{
			return FALSE;
		}
		key[i] = toupper(key[i]);
	}

	char occur_chr[len];
	for (int i = 0; i<len; i++)
		occur_chr[i] = 0;
	
    char temp_key[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	temp_key[26] = '\0';
	int ch;
	char *p = key;
	char *q = occur_chr;
	char *s;
	while ( (ch = *p) != '\0')
	{
		if ( strchr(occur_chr, ch) == NULL)
		{
			*q++ = ch;
			s = strchr(temp_key, ch);
			memmove(s, s+1, 27-(s-temp_key+1)); 
		}
		else 
		{
			memmove(p, p+1, len-(p-key));
			len--;
			continue;
		}
		++p;
	}
    
    strncat(key, temp_key, strlen(temp_key));

	return TRUE;
}




