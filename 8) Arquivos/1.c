#include <stdio.h>
#include <stdlib.h>

int main()
{	char s[100];

	printf("Palavra: ");
	fgets(s,100,stdin);
	
	FILE *f;
	f = fopen("texto1.txt","w");
	
	if (f == NULL)
	{	printf("Erro na abertura\n");
		system("pause");
		exit(1);
	}
	
	for(int i=0; s[i] != '\0'; i++)
	{	fputc(s[i],f);
	}
	
	fclose(f);
}
