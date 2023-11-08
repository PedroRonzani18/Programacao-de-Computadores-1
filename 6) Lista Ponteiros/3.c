#include <stdio.h>
#include <stdlib.h>

char *strstr(char *str1, char *str2)
{	int v=1, ic;
	
	for(int i=0; i < sizeof(str1) ; ic++)
	{	ic = i;
		if (str1[i] == str2[0])
		{	for(int j=0; (j < sizeof(str2)) && v==1 ; j++) //digitos
			{	if(str[i] != str[j]) v=0;
			}
		}
		i = ic;
		if (v==1) ;
		v=1;	
	}
}
