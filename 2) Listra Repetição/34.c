#include <stdio.h>

int potencia(int x, int n)
{	int produto=1;

	while (n>0)
	{	produto = produto * x;
		n--;
	}
	return produto;
}

int main()
{	int num, contador=0, casa=-1, soma=0, posi=-1;

	printf ("Digite um numero: ");
	scanf("%d",&num);

	while (num>=0)
	{	while (casa<0)
		{	if (num%10==0) casa = contador;
			contador++;
			num--;
		}
		posi++;
		soma = soma + (casa*potencia(10,posi));
		casa=-1;
        contador=-1;
	}

	printf ("Soma = %d", soma);



}
