#include <stdio.h>

int fatorial(int n)
{	int produto=1;

	while (n>0)
	{	produto = produto * n;
		n--;
	}
	return produto;
}

int somatorio(int n)
{	int soma=0, i=3;

	while (i<=n)
	{	soma = soma + fatorial(i);
		i++;

	}
	return soma;
}

int main ()
{	int n;	

	printf("Digite um numero: ");
	scanf("%d",&n);
	printf ("Somatorio com n=%d = %d",n,somatorio(n));

}
