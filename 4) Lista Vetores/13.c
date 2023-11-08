#include <stdio.h>

int contar (char s[])
{	int i=0;

	while (s[i]!='\0')
	{	i++;	
	}
	return i;
}

void cancatenar (char s1[], char s2[])
{	int t1=contar(s1);
	int t2=contar(s2);
	int i=0;
	
	while (i<t2)
	{	s1[t1]=s2[i];
		t1++;
		i++;	
	}	

}

int main()
{	char s1[100], s2[100];

	printf ("Palavra 1: ");
	scanf ("%s",s1);
	printf ("Palavra 2: ");
	scanf ("%s",s2);
	cancatenar(s1,s2);
	printf("Palavra nova: %s",s1);

}
