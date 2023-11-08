#include <stdio.h>

void copia (char s1[], char s2[])
{	int i=0;

	while ((s1[i]!='\0')||(s2[i]!='\0'))
	{	s2[i]=s1[i];
		i++;		
	}

}

int main()
{	char s1[100], s2[100];

	printf ("Palavra 1: ");
	scanf ("%s",s1);
	printf ("Palavra 2: ");
	scanf ("%s",s2);
	copia(s1,s2);
	printf ("Palavra 2 nova: %s\n",s2);
}
