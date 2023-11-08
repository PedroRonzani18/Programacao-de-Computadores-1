#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto1.txt","wb");

	char nome[100];
	
	for(int i=0; i<5; i++)
	{	printf("Nome Completo: ");
		fgets(nome,100,stdin);
		fprintf(f,"%s\n",nome);
	}	
	
	char names[50];
	
	for(int i=0; i<50
	fscanf(f,"%s",
}
