#include <stdio.h>

int main ()
{	int num, max, men, d=1, divisores=0, dmax=0, numax;

	printf ("Digite o numero maximo: ");
	scanf ("%d",&max);
	
	while (num<=max)
	{	while (d<=num)
		{	if (num%d==0) divisores++;
			d++;		
		}
		if (divisores>dmax)
		{	dmax=divisores;
			numax=num;
		}
		num++;
		d=1;
		divisores=0;	
	}

	printf ("Numero = %d\nNumero de Divisores = %d\nDivisores: ",numax,dmax);
	
	while (d<=numax)
	{	if (numax%d==0) printf("%d, ",d);
		d++;
	}
	printf ("\n");
}
