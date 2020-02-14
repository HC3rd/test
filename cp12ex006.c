#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	struct NODE *fwd;
	struct NODE *bwd;
	int val;
}NODE;

#define TRUE 1
#define FALSE 0

int dll_remove(struct NODE *rootp, struct NODE *node)
{
	struct NODE *current = rootp->fwd;
	struct NODE *previous = rootp;

	while ( current != NULL)
	{
		if (current == node)
		{
			if (current->fwd != NULL)
			{
				current->fwd->bwd = current->bwd;
			}
			else
			{
				rootp->bwd = current->bwd;
			}
			previous->fwd = current->fwd;
		    return TRUE;
		}
		previous = current;
		current = current->fwd;
	}
	return FALSE;
}

int main(void)
{
	NODE *root = malloc(sizeof(NODE));

	NODE *n1 = malloc(sizeof(NODE));
	NODE *n2 = malloc(sizeof(NODE));
	NODE *n3 = malloc(sizeof(NODE));

	n1->fwd = n2;
	n1->bwd = NULL;
	n1->val = 5;

	n2->fwd = n3;
	n2->bwd = n1;
	n2->val = 10;

	n3->fwd = NULL;
	n3->bwd = n2;
	n3->val = 15;

	root->fwd = n1;
	root->bwd = n2;

	NODE *p = root;


	for (int i = 0; i<3; i++)
	{
		printf("%d ", p->fwd->val);
		p = p->fwd;
	}
	printf("\nAfter delete:\n");
	dll_remove(root, n3);
    p = root;
    for ( int i = 0; i<2; i++)
	{
		printf("%d ", p->fwd->val);
		p = p->fwd;
	}
	printf("\n");
	return 0;
}



	

