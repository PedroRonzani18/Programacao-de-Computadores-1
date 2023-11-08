#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f;

	char s[50];
	printf("Nome do arquivo: ");
	fgets(s,50,stdin);
	
	for(int i=0; s[i] != '\0'; i++)
	{	if(s[i+1] == '\0') s[i] = s[i+1];	
	}
	
	f = fopen(s,"r");
	
	if(f == NULL)
	{	printf("Erro de abertura");
		system("pause");
		exit(1);
	}
	
	fseek(f,-1,SEEK_END);
	int t = ftell(f);
	
	printf("Tamanho: %d\n",t);	
}
