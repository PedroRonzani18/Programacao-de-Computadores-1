#include <stdio.h>
#include <stdlib.h>

/*código elaborado para treinar operações básicas com matrizes,tais como: preencher randomicamente, exibir, remover numeros repetidos e ordenar a matriz*/

void preencher(int m[5][6])
{	for(int i=0; i<5; i++)
	{	for(int j=0; j<6; j++)
		{	m[i][j] = rand()%10;
		}
	}	
}

void exibir(int m[5][6])
{	for(int i=0; i<5; i++)
	{	for(int j=0; j<6; j++)
		{	printf("[%d] ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

void repetido(int m[5][6])
{	int maior = m[0][0], cond;

	for(int i=0; i<5; i++)
	{	for(int j=0; j<6; j++)
		{	if(m[i][j] > maior) maior = m[i][j];
		}
	}	
	maior++;

	for(int i=0; i<5; i++)
	{	for(int j=0; j<6; j++)
		{	for(int x=4; x>=i; x--)
			{	if(x==i) cond = j+1;
				if(x!=i) cond = 0;
					
				for(int y=5; y>=cond; y--)
				{	if(m[i][j] == m[x][y])
					{	m[x][y] = maior;
						maior++;
					}					
				}
			
			}
		}
	}	
}

void ordenar(int m[5][6])
{	int aux, cond;
	
	for(int i=0; i<5; i++)
	{	for(int j=0; j<6; j++)
		{	for(int x=4; x>=i; x--)
			{	if(x==i) cond = j+1;
				if(x!=i) cond = 0;
					
				for(int y=5; y>=cond; y--)
				{	if(m[i][j] > m[x][y])
					{	aux = m[i][j];
						m[i][j] = m[x][y];
						m[x][y] = aux;
					}					
				}
			
			}
		}
	}
}

int main()
{	int m[5][6];

	printf("\n");

	preencher(m); printf("Matriz: \n"); exibir(m);
	ordenar(m); printf("Ordenado: \n"); exibir(m);
	repetido(m); printf("Sem repetição: \n"); exibir(m);
	ordenar(m); printf("Ordenado sem repetição: \n"); exibir(m);
}
