#include <stdio.h>
#include <stdlib.h>

int maior(int v[])
{	int cont=0, quant=0;
	float soma=0, media=0;

	while (cont<=14)
	{	soma = soma + v[cont];
		cont++;	
	}
	media = (soma/15);
	cont=0;
	
	printf ("\nMedia = %f\n",media);
	
	while (cont<=14)
	{	if (v[cont]>media) quant++;
		cont++;	
	}
	return quant;
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
	
	printf ("Quantidade de numeros maiores que a media: %d\n",maior(v));
}
