#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5

int main()
{	int v1[M], v2[N], m[M][N], i=0, j=0, maior = -1, menor = 10;

	while(i<M)
	{	while(j<N)
		{	m[i][j] = rand()%10;
			j++;
		}
		i++;
		j=0;
	}
	i=0;
	
	printf("Matriz: \n");
	while(i<M)
	{	while(j<N)
		{	printf("[%d] ",m[i][j]);
			j++;
		}
		i++;
		j=0;
		printf("\n");
	}
	i=0;
	printf("\n");
	
	while(j<N)
	{	while(i<M)
		{	if(m[i][j] > maior) maior = m[i][j];
			i++;
		}
		v1[j] = maior;
		j++;
		i=0;
		maior = -1;
	}
	j=0;
	
	while(j<N)
	{	while(i<M)
		{	if(m[i][j] < menor) menor = m[i][j];
			i++;
		}
		v2[j] = menor;
		j++;
		i=0;
		menor = 10;
	}
	
	printf("v1: ");
	for(int x=0; x<N; x++) printf("%d, ",v1[x]);
	printf("\n");
	printf("v2: ");
	for(int x=0; x<N; x++) printf("%d, ",v2[x]);
	printf("\n");
}
