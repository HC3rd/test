#if 0
int identity_matrix( int *mat, int size)
{
	int flag = 1;
	for( int i = 0; i < size; i++)
	{
		for ( int j = 0; j < size; j++)
		{
			if ( i==j)
			{
				if ( (*(mat+i)+j) != 1)
				{
					flag = 0;
					break;
				}
			}
			else
			{
				if ( (*(mat+i)+j) != 0)
				{
					flag = 0;
					break;
				}
			}
	}
	return flag;
}
#endif

#define TRUE 1
#define FALSE 0

int identity_matrix(int *matrix, int n)
{
	int row;
	int column;
	for ( row = 0; row < n; row++)
	{
		for ( column = 0; column < n; coulmn++)
		{
			if ( *matrix++ != (row == column))
				return FALSE;
		}
	}
	return TRUE;
}
