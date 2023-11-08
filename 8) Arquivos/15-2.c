#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto.txt","wb");

	char n[100];

	for(int i=0; i<5; i++)
	{	printf("Nome: "); fgets(n,100,stdin);
		fputs(n,f);
		for(int j=0; j<100; j++) n[i] = '\0';
	}
	
	fclose(f);
	f = fopen("texto.txt","rb");
	
	char c;
	
	for(int j=0; j<5; j++)
	{	for(int i=0; (c = fgetc(f)) != '\n'; i++) printf("%c",c); printf("\n");
	}
	
	
}	

