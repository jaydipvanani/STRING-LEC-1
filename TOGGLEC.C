#include<stdio.h>

main()
{
	char ch[] ="JAYdeep";
	int i;
	
	for(i=0; i<=6; i++)
	{
		if( ch[i]>= 'a' && ch[i]<='z' )
		{
			printf("%c",ch+32);
		}	
		else if( ch[i] <='A' && ch[i] >='Z')
		{
			printf("%c",ch-32);
		}
	}
	
}
