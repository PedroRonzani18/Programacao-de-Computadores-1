#include <stdio.h>
#include <stdlib.h>

char *strstr (char *str1, char *str2);

int main()
{	char str1[100], str2[100];

	printf("String 1: "); fgets(str1,100,stdin);
	printf("String 2: "); fgets(str2,100,stdin);
	
	printf("Endereço 1: %p\n",&str1[0]);
	printf("Endereço 2: %p\n",strstr(str1,str2));	
}

char *strstr (char *str1, char *str2)
{	int v=1, ic, t1=0, t2=0;

	for(t1; str1[t1] != '\0'; t1++); t1--;
	for(t1; str2[t2] != '\0'; t2++); t2--;

	for(int i=0; i < t1; i++)
	{	if(str1[i] == str2[0])
		{	ic = i;
			for(int j=0; j < t2; j++, i++)
			{	if(str1[i] != str2[j]) v=0;
			}
			i = ic;
		}
		if(v==1) return &str1[ic];
		v=1;
	}
	return NULL;
}
