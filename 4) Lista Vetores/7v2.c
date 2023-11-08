//colocar em ordem crescente os elementos do vetor. No programa principal, exiba o vetor antes e depois de ordená­lo.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 15


void preencher(int v[])
{
	for(int i = 0; i<15; i++)
		v[i] = rand()%11;
}

void exibir(int v[])
{
	for(int i=0; i<15; i++)
		printf("%d, ", v[i]);
		printf("\n");
}

int ordem(int v[])
{	
	int aux = 0, i = 0, j = 0;
	for(i = 0; i < TAM ; i++)
	{
		for(j = 0;j<(TAM-1-i); j++) 
		{	
			if(v[j]>v[j+1])
			{	
				aux = v[j+1];
				v[j+1] = v[j];
				v[j] = aux;
			}
			exibir(v);
			getchar();
		}
	}
}

int main (void)
{
	srand(time(0));
	int v[15];
	printf("O vetor original é: \n");
	preencher(v);
	exibir(v);
	ordem(v);
	printf("O vetor ordenado é: \n");
	exibir(v);
	return 0;
}
