#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f1, *f2;

	f1 = fopen ("origem6.txt","w");
	
	if (f1 == NULL)
	{	printf("Erro ao abrir");
		system("pause");
		exit(1);
	}
	
	char s[50];
	
	printf("Frase: ");
	fgets(s,100,stdin);
	fputs(s,f1);
	
	fclose(f1);	
	
	f1 = fopen ("origem6.txt","r");
	f2 = fopen ("destino6.txt","w");
	
	if (f1 == NULL || f2 == NULL)
	{	printf("Erro ao abrir");
		system("pause");
		exit(1);
	}
	
	char c = fgetc(f1);
	
	while(c != EOF)
	{	fputc(c,f2);
		c = fgetc(f1);
	}

	fclose(f1);
	fclose(f2);
}
