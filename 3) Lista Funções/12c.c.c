#include <stdio.h>

int menornum(int max)
{	int d=1, divisores=0, num=1, numax, divmax=0;
	
	while (num<=max)
	{	while (d<=num)
		{	if (num%d==0) divisores++;
			d++;		
		}
		
		if (divisores>divmax)
		{	numax = num;
			divmax = divisores;		
		}
		
		divisores=0;
		d=1;
		num++;
	}
	return numax;
}

int numdiv(int num)
{	int d=1, divisores=0;

	while (d<=num)
	{	if (num%d==0) divisores++;
		d++;	
	}
	return divisores;
}

int main()
{	int max, contador=1;

	printf ("\nDigite o numero limite: ");
	scanf ("%d",&max);
	
	int x = menornum(max);
	
	printf ("\nNumero: %d\n\nNumero de divisores: %d\n\nDivisores: ",x,numdiv(x));
	
	while (contador<x)
	{	if (x%contador==0) printf ("%d, ",contador);
		contador++;
	}
	printf ("%d\n\n",x);	
}
