struct NODE{
	int val;
	struct NODE *link;
};

#define TRUE 1
#define FALSE 0

#if 0
int sll_remove( struct NODE **rootp, struct NODE *node)
{
	struct NODE *current = *rootp;
	struct NODE *previous = NULL;
	int flag = FALSE;

	// If the node to remove does exist
	while ( current != NULL)
	{
		if (current == node)
		{
			flag = TRUE;
			break;
		}
		previous = current;
		current = current->link;
	}

	if ( flag == TRUE)
	{
		previous->link = current->link;
	}
	return flag;
}
#endif

int sll_remove( struct NODE **rootp, struct NODE *node)
{
	struct NODE *current;

	assert(node != NULL);

	while ((p = *rootp) != NULL)
	{
		if (p == node)
		{
			*rootp = p->link;
			free(node);
			return TRUE;
		}
		rootp = &p->link;
	}
	return FALSE;
}

