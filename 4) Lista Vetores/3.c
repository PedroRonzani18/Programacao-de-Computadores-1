#include <stdio.h>
#include <stdlib.h>

int soma(int v[])
{	int cont = 0, soma=0;
	while (cont<=14)
	{	if (v[cont]%2==1) soma = soma + v[cont];
		cont++;	
	}
	return soma;
}

int main()
{	int v[15], cont=0;

	while (cont<=14)
	{	v[cont] = rand()%10;
		cont++;
	}
	cont=0;
	
	printf ("Numeros dentro do vetor: ");
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	
	printf ("\nSoma dos impares: %d\n",soma(v));
}
