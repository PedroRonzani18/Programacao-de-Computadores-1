#include <stdio.h>

void preencher(int v[])
{	int i=0;

	while (i<10)
	{	v[i]=0;
		i++;	
	}
}

int casas(int n)
{	int casas=0;

	while (n>0)
	{	casas++;
		n = n/10;	
	}
	return casas;
}

void quant(int i, int f, int v[])
{	int n,r,c=1;

	while (i<=f)
	{	n=i;
		while (c<=casas(i))
		{	r=i%10;
			v[r]++;
			i = i/10;
		}
		i=n;
		i++;
	}
}

void exibir (int v[])
{	int i=0;
	while (i<=9)
	{	printf ("%d ",v[i]);
		i++;	
	}
	printf ("\n");
}

int main()
{	int i,f,t, v[10];
	
	printf ("Digite os valores inicial e fional: ");
	scanf("%d %d",&i,&f);
	
	preencher(v);	
	quant(i,f,v);
	exibir(v);
}
