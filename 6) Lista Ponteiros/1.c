#include <stdio.h>
#include <stdlib.h>

char *strchar(char *s, char ch)
{	
	for(int i=0; s[i] != '\0'; i++)
	{	if(s[i] == ch) return &s[i];
	}
	return NULL;
}	

int main()
{	char *s = malloc(100);
	char ch;

	printf("Palavra: ");
	fgets(s,100,stdin);
	
	printf("Letra: ");
	scanf("%c",&ch);
	
	printf("Endereço: %p\n",strchar(s,ch));
	
}
