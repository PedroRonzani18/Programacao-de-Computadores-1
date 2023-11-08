#include <stdio.h>
#include <stdlib.h>

int* criar_vetor(int* t);
void exibir_vetor(int *v, int t);
void liberar_vetor(int *v);

int main()
{	int *v, t;

	v = criar_vetor(&t);
	exibir_vetor(v,t);
	liberar_vetor(v);
}

int* criar_vetor(int* t)
{	int tam;	
	printf("Tamanho: "); scanf("%d",&tam);
	
	*t = tam;

	int *v = malloc (tam * sizeof(int));
	
	for(int i=0; i<tam; i++) v[i] = rand()%15;
	
	return v;	
}

void exibir_vetor(int *v, int t)
{	printf("Vetor: "); for(int i=0; i<t; i++) printf("%d, ",v[i]); printf("\n");
}

void liberar_vetor(int* v)
{	free(v);
}
