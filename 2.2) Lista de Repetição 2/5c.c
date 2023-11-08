#include <stdio.h>

int casas (int num)
{	int casas=0;

	while (num>=1)
	{	casas++;
		num = num/10;	
	}
	return casas;
}

int potencia (int x, int n)
{	int cont=2, pot=1;

	while (cont<=n)
	{	pot = pot * x;
		cont++;
	}
	return pot;
}

int main()
{	int num, cont=1, nova=0;
	
	printf ("Ddigite um numero: ");
	scanf ("%d",&num);
	
	int numc = num;	
	int c = casas(num), cconst = c;
	
	while (cont<=cconst)
	{	nova = nova + (num%10) * potencia(10,c);
		c--;
		num = num / 10;
		cont++;
	}
	printf ("Numero original: %d\nInvertido: %d\n%d + %d = %d",numc,nova,numc,nova,(numc + nova));

}
