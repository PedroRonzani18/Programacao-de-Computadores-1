#include <stdio.h>
#include <stdlib.h>

int preencher (float v[])
{	int i=0;

	while (i<=14)
	{	v[i] = rand()%11;
		i++;	
	}
}

int exibir (float v[])
{	int i=0;
	printf ("Numeos dentro do vetor: ");

	while (i<=14)
	{	printf ("%.0f, ",v[i]);
		i++;	
	}
	printf ("\n");
}

float max (float v[], int n)
{	int i=0, cp=1;
	float num=-1;

	while (i<(n))
	{	if (v[i]>num) num = v[i];
		i++;	
	}
	return num;
}

int main()
{	float v[15];
	int n;
	
	preencher(v);
	exibir(v);
	
	printf ("Digite o numero de elementos: ");
	scanf ("%d",&n);
	
	printf ("O maior numero dentre os %d primeiros é %.0f\n",n,max(v,n));
}
