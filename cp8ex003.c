int identity_matrix( int mat[][10])
{
	int flag = 1;
	for( int i = 0; i < 10; i++)
	{
		for ( int j = 0; j < 10; j++)
		{
			if ( i==j)
			{
				if ( mat[i][j] != 1)
				{
					flag = 0;
					break;
				}
			}
			else
			{
				if ( mat[i][j] != 0)
				{
					flag = 0;
					break;
				}
			}
	}
	return flag;
}
