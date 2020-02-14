void set_bit ( char bit_array[], unsigned long bit_number)
{
	unsigned long index = bit_number / 8;
	unsigned long bit = bit_number % 8;
	bit_array[index] |= 1 << bit;
}

void clear_bit ( char bit_array[], unsigned long bit_number)
{
	unsigned long index = bit_number / 8;
	unsigned long bit = bit_number % 8;
	bit_array[index] &= ~(1 << bit);
}

void assign_bit ( char bit_array[], unsigned long bit_number, int val)
{
	unsigned long index = bit_number / 8;
	unsigned long bit = bit_number % 8;
	if (val)
	{
	    bit_array[index] |= 1 << bit;
	}
	else
		bit_array[index] &= ~(1 << bit);
}

int test_bit ( char bit_array[], unsigned long bit_number)
{
	unsigned long index = bit_number / 8;
	unsigned long bit = bit_number % 8;
	return bit_array[index] >> bit & 1;
}




