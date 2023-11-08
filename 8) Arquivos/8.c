#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f;

	f = fopen("texto1.txt","w");
	
	char s[50]; printf("String: "); fgets(s,50,stdin); fputs(s,f); 
	
	fclose(f);
	
	f = fopen("texto1.txt","r");
	
	char palavra[50];
	printf("Palavra: "); fgets(palavra,50,stdin);
	
	for(int i=0; 
}
