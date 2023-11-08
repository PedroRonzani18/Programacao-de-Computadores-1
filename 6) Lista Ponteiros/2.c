#include <stdio.h>
#include <stdlib.h>

char *strchar (char *s, char ch)
{	
	for(int i=19; i>=0; i--) 
	{	if(s[i] == ch) return &s[i];
	} 
	return NULL;
}

int main()
{	char *s = calloc(20,sizeof(char));
	char ch;

	printf("Frase: ");
	fgets(s,20,stdin);
	printf("Letra: ");
	scanf("%c",&ch);
	
	printf("Endereço: %p",strchar(s,ch));
	free(s);
}
