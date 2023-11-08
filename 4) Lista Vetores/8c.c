#include <stdio.h>
#include <stdlib.h>

void preencher(int v[])
{	int i=0;
	while(i<15)
	{	v[i]=rand()%11;
		i++;	
	}
}

void exibir(int v[])
{	int i=0;

	printf ("Valores dentro do vetor: ");
	
	while (i<15)
	{	printf ("%d, ",v[i]);
		i++;	
	}
	printf ("\n");
}

int ordenar(int v[])
{	int c1=0, c2=14, i;

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

void maior(int v[])
{	int c=14, card=1, maior=v[14], posi=0;

	printf("Escolha a posição do valor: ");
	scanf("%d",&posi);

	while(card<posi)
	{	if (v[c]<maior)
		{	maior = v[c];
			card++;
		}
		c = c-1;	
	}
	printf ("%do maior numero: %d\n",posi,maior);
}

int main()
{	int v[15];

	preencher(v);
	exibir(v);
	ordenar(v);
	exibir(v);
	maior(v);
	
	

}
