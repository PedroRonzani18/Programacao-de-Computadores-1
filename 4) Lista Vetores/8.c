#include <stdio.h>
#include <stdlib.h>

void preencher(int vet[])
{	int cont=0;
	while (cont<=14)
	{	vet[cont] = rand()%11;
		cont++;	
	}
}

void exibir (int vet[])
{	int i=0;
	printf ("Valores dentro do vetor: ");
	
	while (i<=14)
	{	printf ("%d, ",vet[i]);
		i++;	
	}
	printf ("\n");
}

void crescente(int v[])
{	int c1=0, c2=14;
	int i;

	while (c1 != c2)
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

int terceiro (int v[])
{	int c1=1, c2=14, ordem;
	int posi=1, n1=v[0];
	
	printf ("Insira a ordem do numero: ");
	scanf ("%d",&ordem);
	
	while (c1<14 && posi<=ordem)
	{	if (v[c1]>n1)
		{	n1 = v[c1];
			posi++;	
		}	
		c1++;		
	}

	if (posi==(ordem+1)) printf ("O %do menor numero é %d\n\n",ordem,n1);
	else return 0;
}

int main()
{	int v[15];
	preencher(v);
	exibir(v);
	crescente(v);
	exibir(v);
	if (terceiro(v)==0) printf ("Não há este numerio maior");	
}
