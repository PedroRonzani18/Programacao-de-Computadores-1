#include <stdio.h>
#include <stdlib.h>

void preencher (int v[])
{	int i=0;

	while (i<=14)
	{	v[i] = rand()%11;
		i++;	
	}
}

void exibir (int v[])
{	int i=0;
	printf ("Valores dentro do vetor: ");

	while (i<=14)
	{	printf ("%d, ",v[i]);
		i++;
	}
	printf ("\n");
}

void crescente(int v[])
{	int c1=0, c2=14, meio;

	while (c1 != c2)
	{	while (c1 < c2)
		{	if (v[c1] > v[c2])
			{	meio = v[c1];
				v[c1] = v[c2];
				v[c2] = meio;			
			}
			c1++;		
		}
		c1=0;
		c2--;	
	}

}

int maior (int v[])
{	int i=0, num=-1;
	
	while (i<=14)
	{	if (v[i]>num) num = v[i];
		i++;	
	}
	return num;

}

void repet (int v[])
{	int c1=0, c2=14;
	int sub = maior(v)+1;

	while (c1 != c2)
	{	while (c1<c2)
		{	if (v[c1]==v[c2]) 
			{	v[c2] = sub;
				sub++;
			}
			c1++;		
		}
		c1=0;
		c2--;
	}
}

int main()
{	int v[15];
	preencher(v);
	exibir(v);
	printf ("Maior numero do vetor: %d\n",maior(v));
	crescente(v);
	exibir(v);
	repet(v);
	exibir(v);
	crescente (v);
	exibir(v);
}
