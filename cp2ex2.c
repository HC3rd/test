#include <stdio.h>

int main()
{
	int ch;
	int rcnt = 0;
	int lcnt = 0;
	 while ((ch = getchar() ) != EOF){
		 if( ch == '{')
			 lcnt++;
		 if( ch == '}')
		 {
			 lcnt > rcnt ? (lcnt--, rcnt--) : rcnt++;
		 }
	 }
	 if ( rcnt == 0 && lcnt == 0)
		 printf("All braces are paired.");
	 else
		 printf("There is any brace not paired.");
}
