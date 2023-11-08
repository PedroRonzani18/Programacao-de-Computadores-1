#include <stdio.h>

void copia (char s1[], char s2[], int n)
{	int i=0;

	while (i<=n-1)
	{	s2[i] = s1[i];
		i++;	
	}

}

int main()
{	char s1[100], s2[100];
	int n;

	printf ("Palavra 1: ");
	scanf ("%s",s1);
	printf ("Palavra 2: ");
	scanf ("%s",s2);
	printf ("Numero de casas a serem copiadas: ");
	scanf ("%d",&n);
	copia(s1,s2,n);
	printf ("Nova palavra: %s\n",s2);
}
