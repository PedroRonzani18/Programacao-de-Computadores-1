#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir_vetor(int *v, int t)
{	printf("Vetor: ");
	
	for(int i=0; i<t; i++)
	{	printf("%d, ",v[i]);
	}
}

int *criar_vetor(int *v)
{	int t, i;

	printf("Tamanho: ");
	scanf("%d",&t);
      
	v = (int *) malloc(t*sizeof(int));
	return t;
}

void liberar_vetor(int *v)
{	free(v);
} 

int main()
{	int *v;

	int *t;
	t = criar_vetor(v);
	exibir_vetor(v,t);
	liberar_vetor(v);	
}
