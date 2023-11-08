#include <stdio.h>
#include <stdlib.h>

void exibir(int *v, int t)
{	printf("Vetor: ");
	for(int i=0; i<t; i++) printf("%d, ",v[i]);
	printf("\n");
}

int main()
{	int t;

	printf("Tamanho do vetor: ");
	scanf("%d",&t);
	
	int *v = (int*) malloc(t*sizeof(int));
	//int *p[4];
	int **p = (int**) malloc(t*sizeof(int*));

	for(int i=0; i<t; i++) v[i] = rand()%11; //preenche
	
	exibir(v,t);
	
	int maior = -1; //encontra maior
	for(int i=0; i<t; i++)
	{	if(v[i] > maior) maior = v[i];
	}
	maior++;
	
	for(int c1=0; c1<t; c1++) //tira repetidos
	{	for(int c2 = t-1; c2>c1; c2--)
		{	if(v[c1] == v[c2])
			{	v[c1] = maior;
				maior++;	
			}
		}
	}
	
	exibir(v,t);
	int aux;
	
	for(int c1=0; c1<t; c1++)
	{	for(int c2 = t-1; c2>c1; c2--)
		{	if(v[c1] < v[c2])
			{	aux = v[c1];
				v[c1] = v[c2];
				v[c2] = aux;
			}
		}
	}
	
	exibir(v,t);
	
	printf("Posições: ");
	for(int i=0; i<t; i++)
	{	printf("%p, ",&v[i]);
	}
	printf("\n");
	
	for(int i=0; i<t; i++)
	{	p[i] = &v[i];
	}	
	
	printf("Vetor: ");
	for(int i=0; i<t; i++) printf("%p, ",p[i]);
	printf("\n");
	
}
