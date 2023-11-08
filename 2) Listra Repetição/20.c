#include <stdio.h>

int n_div(int num)
{   int contador=1, divisores;

	while (contador<=num)
	{	if ((num%contador)==0) divisores++;
        contador++;
	}
	return divisores;
}

int main()
{	int contador=1, x1=0, x2=0, num=0, divisores=0;

	while (contador==1) x1=n_div(contador);

	while (contador<=4)
	{	contador++;
		x2 = n_div(contador);

		if (x2 > x1)
		{	if (x2 < num)
            {   num = contador;
                divisores = x2;
            }
		}
		x1 = x2;
	}

	printf ("Numero");
}
