#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f;

	f = fopen("texto1.txt","w");
	
	if(f == NULL)
	{	printf("Erro de abertura");
		system("pause");
		exit(1);
	}
	
	char s[100];
	printf("Frase: ");
	fgets(s,100,stdin);
	
	for(int i=0; s[i] != '\0'; i++)
	{	fputc(s[i],f);
	}
	
	fclose(f);
	
	f = fopen("texto1.txt","r");
	
	char c = fgetc(f);
	int conta = 0;
	
	while(c != EOF)
	{	if(c == 'a') conta++;
		c = fgetc(f);
	}
	
	fclose(f);
	
	printf("Quantidade: %d\n",conta);
}
