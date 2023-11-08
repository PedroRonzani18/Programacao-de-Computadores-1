#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencher(int *v, int n)
{	srand(time(0));	
	for(int i=0; i<n; i++)
	{	v[i] = rand()%11;
	}
}

int main()
{	int n;

	printf("Valor: ");
	scanf("%d",&n);
	
	int *v = calloc(n,sizeof(int));
	
	preencher(v,n);
	
	printf("Vetor: ");
	for(int i=0; i<n; i++)
	{	printf("%d, ",v[i]);
	}
	printf("\n");
}
