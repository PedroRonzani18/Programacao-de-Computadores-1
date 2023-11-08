#include <stdio.h>
#include <stdlib.h>

int espaco (char s1[])
{	int cont=0, i=0;

	while (s1[i] != '\0')
	{	if (s1[i]==' ') cont++;
		i++;	
	}
	return cont;
}

void sobrenome(char s1[], char s2[])
{	int i=0, j=0, esp=0;

	while(esp<espaco(s1))
	{	if(s1[i]==' ') esp++;
		i++;	
	}
	
	while(s1[i] != '\0')
	{	s2[j] = s1[i];
		j++;
		i++;	
	}
}

int main()
{	char s1[100], s2[100];

	printf ("Digite seu nome completo: ");
	gets(s1);
	sobrenome(s1,s2);
	printf ("%s\n",s2);	
}
