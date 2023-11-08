#include <stdio.h>

int potencia (int x, int n)
{	int pot=1, cont=1;

	if (n==0) return 1;
	
	while (cont<=n)
	{	pot = pot * x;
		cont++;
	}
	return pot;
}

int soma(int num)
{	int novo=0, pot=0;

	while (num>=1)
	{	if (num%10!=0)
		{	novo = novo + (num%10) * potencia(10,pot);
			pot++;		
		}
		num = num/10;	
	}
	return novo;

}

int main()
{	int x, y;
	
	printf ("Digite dois numeros: ");
	scanf ("%d %d",&x,&y);
	printf ("soma = %d",soma (x+y));
}
