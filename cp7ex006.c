#include <stdio.h>

void written_amount( unsigned int amount, char *buffer);
void prt( char *dst; char *src);
void word( int val, char *dst);

int num_len[100];

char one[] = "ONE"; num_len[1] = 3;
char two[] = "TWO"; num_len[2] = 3;
char three[] = "THREE"; num_len[3] = 5;
char four[] = "FOUR"; num_len[4] = 4;
char five[] = "FIVE"; num_len[5] = 4;
char six[] = "SIX"; num_len[6] = 3;
char seven[] = "SEVEN"; num_len[7] = 5;
char eight[] = "EIGHT"; num_len[8] = 5;
char nine[] = "NINE"; num_len[9] = 4;
char ten[] = "TEN"; num_len[10] = 3;
char eleven[] = "ELEVEN"; num_len[11] = 6;
char twelve[] = "TWELVE"; num_len[12] = 6;
char thirteen[] = "THIRTEEN"; num_len[13] = 8;
char fourteen[] = "FOURTEEN"; num_len[14] = 8;
char fifteen[] = "FIFTEEN"; num_len[15] = 7;
char sixteen[] ="SIXTEEN"; num_len[16] = 7;
char seventeen[] = "SEVENTEEN"; num_len[17] = 9;
char eighteen[] ="EIGHTEEN"; num_len[18] = 8;
char nineteen[] = "NINETEEN"; num_len[19] = 8;
char twenty[] = "TWENTY"; num_len[20] = 6;
char thirty[] = "THIRTY"; num_len[30] = 6;
char fourty[] = "FOURTY"; num_len[40] = 6;
char fifty[] = "FIFTY"; num_len[50] = 5;
char sixty[] = "SIXTY"; num_len[60] = 5;
char seventy[] = "SEVENTY"; num_len[70] = 7;
char eighty[] = "EIGHTY"; num_len[80] = 6;
char ninety[] = "NINETY"; num_len[90] = 6;
char hundred[] = "HUNDRED";
char thousand[] = "THOUSAND";
char million[] = "MILLION";
char billion[] = "BILLION";
char trillion[] = "TRILLION";


int main(void)
{
	for (int i = 20; i<100 ; i+=10)
	{
		for (int j = 9; j>0; j--)
			num_len[i+j] = num_len[i];
	}

}

void written_amount( unsigned int amount, char *buffer)
{
	int dec[13];
	int temp = amount;
	int i = 0;
	int skip_flag = 0;
	for ( ; tamp = amount, amount /= 10 != 0; i++)
	{
		dec[i] = temp % 10;
	}
	for ( int j = 12; j >= i; j--)
	{
		dec[j] = 0;
	}
	 while ( i >= 0)
	 {
		 if ( i % 3 == 0)
		 {
			 if ( skip_flag == 0)
			 {
				 word(dec[i], buffer);
				 buffer += numlen[dec[i]] +1;
			 }
	
			 if ( i == 12 && dec[i] != 0)
			 {
				 prt(buffer, trillion);
				 buffer += 9;
			 }
			 else if ( dec[i] != 0 || dec[i+1] != 0 || dec[i+2] != 0)
			 {
			      if ( i == 9)
			     {
				     prt(buffer, billion);
				     buffer += 8;
			     }
			     else if ( i == 6)
			     {
				     prt(buffer, millon);
				     buffer += 7;
			     }
			     else if ( i == 3)
			     {
				     prt(buffer, thousand);
				     buffer += 9;
				 }
			 }
		 }
		 else if ( (i+1) %3 == 0)
		 {
			 word(dec[i], buffer);
			 buffer += numlen[dec[i]] + 1;
			 prt(buffer, hundred);
			 buffer += 8;
		 }
		 else if ( i%2 == 0)
		 {
			 if ( dec[i] == 0)
			 {
				 if (dec[i-1] != 0)
				 {
					 prt(buffet, and);
					 buffer += 4;
				 }
			 }
			 else
			 {
				 if (dec[i] ==1)
				 {
				     skip_flag = 1;
				 }
				 word(10*dec[i]+dec[i-1], buffer);
				 buffer += numlen[10*dec[i]+dec[i-1]] + 1;
			 }
		 }
		 i--;
	 }
}


}

void prt( char *buf, char *src)
{
	for (; *src != '\0';)
		*buf++ = *src++;
	*buf == ' ';
}

void word( int val, char *buffer)
{
                  switch( val)
			     {
				     case 0:
					     break;
				     case 1:
					     prt( buffer, one);
					     break;
				     case 2:
					     prt( buffer, two);
				         break;
			         case 3:
					     prt( buffer, three);
					     break;
				     case 4:
					     prt( buffer, four);
				         break;
				     case 5:
					     prt( buffer, five);
					     break;
				     case 6:
					     prt( buffer, six);
					     break;
				     case 7:
					     prt( buffer, seven);
					     break;
				     case 8:
					     prt( buffer, eight);
					     break;
				     case 9:
					     prt( buffer, nine);
					     break;
					 case 10:
						 prt( buffer, ten);
						 break;
					 case 11:
						 prt( buffer, eleven);
						 break;
					 case 12:
						 prt( buffer, twelve);
						 break;
					 case 13:
						 prt( buffer, thirteen);
						 break;
					 case 14:
						 prt( buffer, fourteen);
						 break;
					 case 15:
						 prt( buffer, fifteen);
						 break;
					 case 16:
						 prt( buffer, sixteen);
					     break;
					 case 17:
						 prt( buffer, seventeen);
						 break;
					 case 18:
						 prt( buffer, eighteen);
						 break;
					 case 19:
						 prt( buffer, nineteen);
						 break;
					 case 20:
					 case 21:
					 case 22:
					 case 23:
					 case 24:
					 case 25:
					 case 26:
					 case 27:
					 case 28:
					 case 29:
						 prt( buffer, twenty);
						 break;
					 case 30:
					 case 31:
					 case 32:
					 case 33:
					 case 34:
					 case 35:
					 case 36:
					 case 37:
					 case 38:
					 case 39:
						 prt( buffer, thirty);
						 break;
					 case 40:
					 case 41:
					 case 42:
					 case 43:
					 case 44:
					 case 45:
					 case 46:
					 case 47:
					 case 48:
					 case 49:
						 prt( buffer, fourty);
						 break;
					 case 50:
					 case 51:
					 case 52:
					 case 53:
					 case 54:
					 case 55:
					 case 56:
					 case 57:
					 case 58:
					 case 59:
						 prt( buffer, fifty);
						 break;
					 case 60:
					 case 61:
					 case 62:
					 case 63:
					 case 64:
					 case 65:
					 case 66:
					 case 67:
					 case 68:
					 case 69:
						 prt( buffer, sixty);
						 break;
					 case 70:
					 case 71:
					 case 72:
					 case 73:
					 case 74:
					 case 75:
					 case 76:
					 case 77:
					 case 78:
					 case 79:
						 prt( buffer, seventy);
						 break;
					 case 80:
					 case 81:
					 case 82:
					 case 83:
					 case 84:
					 case 85:
					 case 86:
					 case 87:
					 case 88:
				     case 89:
						 prt (buffer, eithty);
						 break;
					 case 90:
					 case 91:
					 case 92:
					 case 93:
					 case 94:
					 case 95:
					 case 96:
					 case 97:
					 case 98:
					 case 99:
						 prt (buffer, ninety);
						 break;
				     default:
					     printf("ERROR: Not a number!\n");
					     return;
				 }
}

