#include <stdio.h>
#include <stdlib.h>

char *strstr(char *s1, char *s2)
{	int t1=0,t2=0;

	for(t1; s1[t1] != '\0'; t1++); t1--;
	for(t1; s2[t2] != '\0'; t2++); t2--;

	printf("t1 = %d, t2 = %d\n",t1,t2);	
	
	int inic, v=1;

	for(int i=0; i<t1; i++)
	{	if (s1[i]==s2[0])
		{	inic = i;
			for(int j=0; j<t2 && v==1; j++, i++)
			{	if(s1[i] != s2[j])
				{	v=0;
				}
			}
			if(v==1) return &s1[inic];
			v=1;
		}		
	}
	return NULL;
}

int main()
{	char s1[100], s2[100];

	printf("String 1: ");
	fgets(s1, 100, stdin);
	printf("String 2: ");
	fgets(s2, 100, stdin);
	
	char *x = strstr(s1,s2);
	
	printf("endereço = %p\n",x);
}
