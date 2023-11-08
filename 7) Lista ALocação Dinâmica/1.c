#include <stdio.h>
#include <stdlib.h>

void preencher(int *v, int *t)
{	int n = *t;	
	for(int i=0; i < n; i++) v[i] = rand()%11;
}

void exibir(int *v, int *t)
{	int n = *t;
	printf("Vetoir: ");	
	for(int i=0; i < n; i++) printf("%d, ",v[i]); printf("\n");
}

int main()
{	int n;

	printf("Digite um valor: ");
	scanf("%d",&n);
	int *v = (int*) malloc(n*sizeof(int));
	int x = sizeof(v);

	preencher(v,&n);
	exibir(v,&n);
	free(v);
}
