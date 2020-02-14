#include <stdio.h>

int store_bit_field( int original_value,
		int value_to_store,
		unsigned starting_bit, unsigned ending_bit);

int main()
{
	int org[3] = { 0, 0xffff, 0xffff};
	int val[3] = { 1, 0x123, 0x123};
	unsigned st[3] = { 4, 15, 13};
	unsigned ed[3] = { 4, 4, 9};
	for (int i = 0; i<3; i++)
		printf("After store: 0x%x\n", store_bit_field( org[i],
					val[i], st[i], ed[i]));
}

int store_bit_field( int org, int val, unsigned st, unsigned ed)
{
	// First, construct a mask
	unsigned mask = (unsigned) -1;
	mask = mask << ed & ~(mask << st+1);
	// CLear ones of orinal which in the mask range
	org &= ~mask;
	// Then shift the value to be stored to the field
	// And with mask to clear those out of range
	mask &=  val << ed;
	// Last OR with original value 
	return org | mask;
}
	
