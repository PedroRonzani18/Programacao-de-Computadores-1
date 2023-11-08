#include <stdio.h>

int numax(int num)
{	int contador=1, div_max=1, divisores=0, numax, d=1;

	while (contador<=num)
	{	while (d<=contador)
		{	if (contador%d==0) divisores++;
			d++;
		}
		
		if (divisores>div_max) 
		{	div_max = divisores;	
			numax = contador;
		}	
	contador++;
	d=1;
	divisores=0;	
	}
	return numax;
}

int nudiv (int num)
{	int d=1, divisores=0;
	while (d<=num)
	{	if (num%d==0) divisores++;
		d++;	
	}
	return divisores;
}

int main()
{	int max, d=1;

	printf ("Digite o valor maximo: ");
	scanf ("%d",&max);
	printf ("Numero = %d\nNumero de Divisores = %d\nDivisores= ",numax(max),nudiv(numax(max)));
	
	int x=numax(max);
	
	while (d<=x)
	{	if (x%d==0) printf ("%d, ",d);
		d++;	
	}
	

}
