#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int preencher(int *v, int t)
{	srand(time(0));	
	for(int i=0; i<t; i++)
		v[i] = rand()%11;
		
	printf("Vetor: ");
	for(int i=0; i<t; i++)
	{	printf("%d, ",v[i]);
	}
	printf("\n");
	
	int t2;
	printf("Quantidade a adicionar: ");
	scanf("%d",&t2);
	
	v = (int *) realloc(v,(t2+t) * sizeof(int));
	
	for(int i=t; i < (t+t2); i++) 
	{	v[i] = rand()%11;
	}
	
	printf("Teste"); getchar();
	return t + t2;	
}

int main()
{	int t;
	
	printf("Tamanho do vetor: ");
	scanf("%d",&t);
	
	int *v = calloc (t,sizeof(int));
	
	int x = preencher(v,t);
	
	printf("Vetor novo: ");
	for(int i=0; i<x; i++) printf("%d, ",v[i]);
	printf("\n"); 
}
