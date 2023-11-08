#include <stdio.h>

int compara (char s1[], char s2[])
{	int i=0;

	while (1)
	{	if (s1[i]!=s2[i]) return 0;
		if ((s1[i]=='\0')&&(s2[i]=='\0')) return 1;
		i++;
	}
}

int main()
{	char s1[20], s2[20];

	printf ("Palavra 1: ");
	scanf ("%s",s1);
	printf ("Palavra 2: ");
	scanf ("%s",s2);
	
	if (compara(s1,s2)==1) printf ("Iguais");
	else printf("Diferentes");
}
