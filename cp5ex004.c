#include <stdio.h>
#define MAX_LEN 1000

void set_bit ( char *, unsigned);
void clear_bit ( char *, unsigned);
void assign_bit ( char *, unsigned, int);
int test_bit ( char *, unsigned);

int main()
{
	char str[MAX_LEN];
	unsigned int i = 0;
	while (gets(str) != NULL)
		;
	while (getchar() != '\n')
		;
	printf("Please enter whitch bit to change:\n");
	if ( scanf("%u", &i) != 1)
	{
		printf("Invalid input.");
		return -1;
	}
	set_bit( str, i);
	printf("After set bit: %s\n", str);
	clear_bit( str, i);
	printf("After clear bit: %s\n", str);
	assign_bit( str, i, 2);
	printf("After assign bit: %s\n", str);
	printf("Test the bit is %d\n", test_bit( str, i));
	return 0;
	
			
}

void set_bit ( char bit_array[], unsigned bit_number)
{
	int index = bit_number / 8;
	int bit = bit_number % 8;
	bit_array[index] |= 1 << bit;
}

void clear_bit ( char bit_array[], unsigned bit_number)
{
	int index = bit_number / 8;
	int bit = bit_number % 8;
	bit_array[index] &= ~(1 << bit);
}

void assign_bit ( char bit_array[], unsigned bit_number, int val)
{
	int index = bit_number / 8;
	int bit = bit_number % 8;
	if ( val)
	{
	    bit_array[index] |= 1 << bit;
	}
	else
		bit_array[index] &= ~(1 << bit);
}

int test_bit ( char bit_array[], unsigned bit_number)
{
	int index = bit_number / 8;
	int bit = bit_number % 8;
	return bit_array[index] >> bit & 1;
}
