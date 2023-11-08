#include <stdio.h>
#include <stdlib.h>

void preencher(int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	m[i][j] = rand()%11;
			j++;
		}
		i++;
		j=0;	
	}
}

void exibirm (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	printf ("[%d] ",m[i][j]);
			j++;		
		}
		i++;
		j=0;
		printf("\n");
	}
}

void exibirv(int v[])
{	int i=0;

	printf ("Valores dentro do vetor: ");
	
	while (i<15)
	{	printf ("%d, ",v[i]);
		i++;	
	}
	printf ("\n");
}


int ordenar(int v[])
{	int c1=0, c2=19, i;

	while (c1<c2)
	{	while (c1<c2)
		{	if (v[c1]>v[c2])
			{	i = v[c1];
				v[c1] = v[c2];
				v[c2] = i;			
			}
		
			c1++;		
		}
		c2--;
		c1=0;		
	}
}

int segmaior (int m[4][5])
{	int i=0, j=0, c=0;
	int v[20];
	
	while (i<4)
	{	while (j<4)
		{	v[c] = m[i][j];
			c++;
			j++;			
		}
		i++;
		j=0;
	}
	c=19;
	printf ("Teste 1\n");
	
	exibirv(v);
	ordenar(v);
	exibirv(v);
	
	int card=1, posi=0, maior=v[19];
	
	printf("Escolha a posição do valor: ");
	scanf("%d",&posi);

	while(card<posi)
	{	if (v[c]<maior)
		{	maior = v[c];
			card++;
			printf("Maior: %d, v[c]: %d\n",maior,v[c]);
		}
		c = c-1;	
	}
		printf ("Teste 2\n");
	
	printf("%do maior numero: %d\n",card,maior);	
}

int main()
{	int m[4][5];

	preencher(m);
	exibirm(m);
	segmaior(m);

}
