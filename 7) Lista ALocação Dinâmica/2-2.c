#include <stdio.h>
#include <stdlib.h>

int preencher_exibir(int *v, int n)
{	printf("Vetor: ");
	
	for(int i=0; i<n; i++)
	{	v[i] = rand()%15;
		printf("%d, ",v[i]);
	}
	printf("\n");
}

int main()
{	int n,n2;

	printf("Tamanho: "); scanf("%d",&n);
	
	int *v = malloc(n*sizeof(int));
	
	preencher_exibir(v,n);
	
	printf("Quantos elementos a mais: "); scanf("%d",&n2);
	
	v = realloc(v,(n + n2) * sizeof(int));
	
	for(int i=n; i< (n+n2); i++)
	{	v[i] = rand()%15;
	}
	
	printf("Vetor: ");
	for(int i=0; i<(n+n2); i++) printf("%d, ",v[i]); printf("\n");
}
