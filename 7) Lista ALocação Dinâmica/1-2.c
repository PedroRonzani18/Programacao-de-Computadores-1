#include <stdio.h>
#include <stdlib.h>

void preencher(int *v, int n);

int main()
{	int n;

	printf("Valor de n: "); scanf("%d",&n);
	
	int *v = malloc( n * sizeof(int));
	
	preencher(v,n);
	
	printf("Vetor: "); for(int i=0; i<n; i++) printf("%d, ",v[i]); printf("\n");
}

void preencher(int* v,int n)
{	for(int i=0; i<n; i++) v[i] = rand()%15;
}

