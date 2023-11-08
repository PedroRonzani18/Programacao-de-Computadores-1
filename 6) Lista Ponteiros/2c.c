#include <stdio.h>
#include <stdlib.h>

char* strchar(char* s, char ch)
{	int t=0;

	for(t; s[t] != '\0'; t++);

	for(int i=t; s[i] != '\0'; i--)
	{	if(s[i] == ch) return &s[i];
	}
	return NULL;
} 

int main()
{	char s[100], ch;

	printf("Palavra: "); fgets(s,100,stdin);
	
	for(int i=0; s[i] != '\0'; i++)
	{	if(s[i] == '\n' && s[i+1] == '\0') s[i] = '\0';
	}
	
	printf("Letra: "); scanf("%c",&ch);
	
	printf("Endereço: %p",strchar(s,ch));
}
