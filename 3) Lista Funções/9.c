#include <stdio.h>

int fatorial(int n)
{	int produto=1;

	while (n>0)
	{	produto = produto * n;
		n--;
	}
	return produto;
}

int main ()
{	int num;

	printf ("Digite um numero: ");
	scanf("%d",&num);

	printf ("%d! = %d",num,fatorial(num));
}
