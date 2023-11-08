#include <stdio.h>
#include <stdlib.h>

int maior(int v[])
{	int cont=0, maior=-1;

	while (cont<=14)
	{	if (v[cont]>maior) maior = v[cont];
		cont++;	
	}
	return maior;

}

int main()
{	int v[15], cont=0;

	while (cont<=14)
	{	v[cont]=rand()%10;
		cont++;	
	}
	cont=0;
	
	printf ("Numeros dentro do vetor: ");
	
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	cont=0;
	
	printf ("\nMaior numero dentro do vetor: %d\n",maior(v));
}
