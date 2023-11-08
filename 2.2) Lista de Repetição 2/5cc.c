#include <stdio.h>

int casas(int num)
{	int casas=0;
	
	while (num>=1)
	{	num = num/10;
		casas++;	
	}
	return casas;
}

int potencia (int x, int n)
{	int pot=1, cont=1;

	if (n==0) return 1;
	
	while (cont<=n)
	{	pot = pot * x;
		cont++;	
	}
	return pot;
}

int inverso (int num)
{	int novo=0;
	int x = casas(num)-1;

	while (num>=1)
	{	novo = novo + (num%10) * potencia(10,x);
		num = num/10;	
		x--;
	}
	return novo;

}

int main()
{	int num;
	
	printf ("Digite um numero a ser invertido: ");
	scanf  ("%d",&num);
	printf ("Inverso: %d\n",inverso(num));
}
