#include <stdio.h>

int fatorial(int n)
{	int produto=1;

	while (n>0)
	{	produto = produto * n;
		n--;
	}
	return produto;
}

float potencia(int x, int n)
{	float produto=1;

	while (n>0)
	{	produto = produto * x;
		n--;
	}
	return produto;
}

float somatorio (float n)
{	float soma = 0;
	int i=3;

	while (i<=n)
	{	soma = soma + (fatorial(i)/potencia(i,i));
		i++;
	}
	return soma;
}

int main()
{	int n;

	printf ("Digite o valor de n: ");
	scanf("%d",&n);

	printf ("Somatorio = %f",somatorio(n));
}
