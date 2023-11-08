#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void exibir_vetor(int *v, int t)
{	printf("Vetor: ");
	
	for(int i=0; i<t; i++)
	{	printf("%d, ",v[i]);
	}
	printf("\n");
}

int* criar_vetor (int *t)
{	int tam;	
	printf("Tamanho: ");
	scanf("%d",&tam);
      
	int *v = (int *) malloc(tam*sizeof(int));
	
	for(int i=0; i<tam; i++)
		v[i] = rand()%10;
		
	*t = tam;
		
	return v; //retona o endereço do primeiro elemento do vetor
		    // pode ser &v[0]
}

void liberar_vetor(int *v)
{	free(v);
} 

int main()
{	int t;
	int *v = criar_vetor(&t);
	exibir_vetor(v,t);
	liberar_vetor(v);	
}
