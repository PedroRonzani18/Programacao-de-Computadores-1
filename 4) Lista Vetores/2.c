#include <stdio.h>
#include <stdlib.h>

int pares(int v[])
{	int c=14, cont=0, pares=0;

	while (cont<=c)
	{	if (v[cont]%2==0) pares++;
		cont++;	
	}
	return pares;
}

int main()
{	int v[15], cont=0;

	while (cont<=14)	//coloca valores aleatorios dentro do vetor
	{	v[cont]=rand()%10;
		cont++;	
	}
	cont = 0;
	
	printf ("Numeros dentro do vetor: ");
	
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	
	printf ("\nQuantidade de nunmeros pares: %d\n",pares(v));	
}
