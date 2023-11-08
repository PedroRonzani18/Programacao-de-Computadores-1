#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f;

	f = fopen ("texto1.txt","w");
	if(f == NULL)
	{	printf("Erro de abertura");
		system("pause");
		exit(1);
	}
	
	char s[100];
	printf("Frase: ");
	fgets(s,100,stdin);
	
	fputs(s,f);
	fclose(f);
}
