#include <stdio.h>

int casas (float num)
{	int val=0;

	if (num==0) return 1;	
	
	while (num>=1)
	{	val++;
		num = num/10;	
	}
	return val;
}

int potencia (int x, int n)
{	int cont=1, pot=1;

	while (cont<=n)
	{	pot = pot * x;
		n++;	
	}
	return pot;

}

int inverso(int num)
{	int cont=1, novo=0;
	int numc=num, x, ncont;

	while (cont<=(casas(numc)))
	{	x = casas(num);
		ncont = 1-cont;
		novo = novo + (num%10)*(potencia(10,(x+1-cont)));
		cont++;
		num = num/10;	
		printf ("Novo = %d cont = %d trem = %d\n",novo,cont,x);
	}
	return novo;
}

int main()
{ 	int num;
	printf ("Digite um numero: ");
	scanf ("%d",&num);
	printf ("Inverso = %d",inverso(num));
} 	 
