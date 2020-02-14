#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef struct WORDS{
	struct WORDS *next;
	char *word;
};

typedef struct LIST{
	struct LIST *link;
	char ch;
    WORDS *first;
};

LIST *a = malloc(sizeof(LIST));
LIST *b = malloc(sizeof(LIST));
LIST *c = malloc(sizeof(LIST));
LIST *d = malloc(sizeof(LIST));
LIST *e = malloc(sizeof(LIST));
LIST *f = malloc(sizeof(LIST));
LIST *g = malloc(sizeof(LIST));
LIST *h = malloc(sizeof(LIST));
LIST *i = malloc(sizeof(LIST));
LIST *j = malloc(sizeof(LIST));
LIST *k = malloc(sizeof(LIST));
LIST *l = malloc(sizeof(LIST));
LIST *m = malloc(sizeof(LIST));
LIST *n = malloc(sizeof(LIST));
LIST *o = malloc(sizeof(LIST));
LIST *p = malloc(sizeof(LIST));
LIST *q = malloc(sizeof(LIST));
LIST *r = malloc(sizeof(LIST));
LIST *s = malloc(sizeof(LIST));
LIST *t = malloc(sizeof(LIST));
LIST *u = malloc(sizeof(LIST));
LIST *v = malloc(sizeof(LIST));
LIST *w = malloc(sizeof(LIST));
LIST *x = malloc(sizeof(LIST));
LIST *y = malloc(sizeof(LIST));
LIST *z = malloc(sizeof(LIST));

a->ch = 'a';
b->ch = 'b';
c->ch = 'c';
d->ch = 'd';
e->ch = 'e';
f->ch = 'f';
g->ch = 'g';
h->ch = 'h';
i->ch = 'i';
j->ch = 'j';
k->ch = 'k';
l->ch = 'l';
m->ch = 'm';
n->ch = 'n';
o->ch = 'o';
p->ch = 'p';
q->ch = 'q';
r->ch = 'r';
s->ch = 's';
t->ch = 't';
u->ch = 'u';
v->ch = 'v';
w->ch = 'w';
x->ch = 'x';
y->ch = 'y';
z->ch = 'z';

a->link = b;
b->link = c;
c->link = d;
d->link = e;
e->link = f;
f->link = g;
g->link = h;
h->link = i;
i->link = j;
j->link = k;
k->link = l;
l->link = m;
m->link = n;
n->link = o;
o->link = p;
p->link = q;
q->link = r;
r->link = s;
s->link = t;
t->link = u;
u->link = v;
v->link = w;
w->link = x;
x->link = y;
y->link = z;
z->link = NULL;

LIST *head = a;

int main(void)
{
}



int add_word( LIST **start, char *word)
{
	int ch = *word;
	if ( isalpha(ch))
	{
	    LIST *alpha_list = *start;
		while ( alpha_list->ch != ch)
		{
			alpha_list = alpha_list->link;
		}
		WORDS **wordsp = &alpha_list->first;
        WORDS *current;
		while ( (current = *wordsp) != NULL)
		{
			if ( strcmp( word, current->word) == 0)
			{
				return FALSE;
			}
			else if ( strcmp( word, current->word) < 0)
			{
				break;
			}
			wordsp = &(*wordsp)->next;
		}
		WORDS *p = malloc(sizeof(WORDS));
		if ( p == NULL)
			return FALSE;

		char *str = malloc(strlen(word)+1);
		p->word = strcpy(str, word);
		p->next = NULL;

		*wordsp = p;
        p->next = current;
		return TRUE;
	}
	return FALSE;
}





















