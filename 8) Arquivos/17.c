#include <stdio.h>
#include <stdlib.h>

int dist(int c[], FILE *f)
{	int m[5][5], soma=0;

	for(int i=0; i<5; i++)
	{	for(int j=0; j<5; j++)
		{	fread(&m[i][j],sizeof(int),1,f);
		}
	}

	for(int i=0; i<6; i++)	soma = soma + m[c[i]-1][c[i+1]-1];
	
	return soma;
}

int main()
{	FILE *f = fopen("matrix","rb");

	int cidades[7] = {1,2,3,2,5,1,4};
	
	printf("Distância: %d\n",dist(cidades,f));	
}
