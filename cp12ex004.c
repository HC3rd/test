struct NODE{
	int val;
	struct NODE *link;
};

struct NODE *sll_reverse(struct NODE *first)
{
	struct NODE *previous = NULL;
	struct NODE *temp;
	if (first == NULL)
		return NULL;

	while ( first->link != NULL)
	{
		temp = first->link;
		first->link = previous;
		previous = first;
		first = temp;
	}
	first->link = previous;
	return first;
}

