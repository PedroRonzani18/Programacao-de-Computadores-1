#include <stdio.h>

int casas (float num)
{	int casas=0;

	if (num==0) return 1;	

	while (num>=1)
	{	casas++;
		num = num/10;	
	}
	return casas;
}

int potencia(int x, int n)
{	int contador=1, pot=1;
	while (contador<=n)
	{	pot = pot * x;
		contador++;	
	}
	return pot;

}

int main()
{	int x, y, casa=0, pot=-1;
	//casa = casa em que o numero realmente está
	//pot = casa em que o numero estará
	printf ("Digite dois numeros: ");
	scanf ("%d %d",&x,&y);
	int soma = x + y, somanova=0;
	int somac = soma;
	
	while (casa<=casas(somac))
	{	casa++;
		if ((soma%10)>0) 
		{	pot++;
			somanova = somanova + (soma%10)*(potencia(10,pot));
		}
		soma = soma/10;
	}
	printf ("Nova soma = %d\n",somanova);
}
	
