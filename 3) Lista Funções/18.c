#include <stdio.h>	

int casas (float num)
{	int valid=1, casas=0;
	float pot=10;

	while (valid==1)
	{	casas++;
		if (num/pot<1) {valid=0;}
		pot = pot*10;
	}
	return casas;
}

int prox (int valor)
{	int num=valor-1, valid=1, pot=10, contador=1;

	while (valid==1)
	{	num++;
		
		while ((contador<=casas(num)) && (valid==1))
		{	if ((num%pot)==0 || (num%pot)==1 || (num%pot)==2)
			{		if (num%valor==0) valid=0;
					printf ("Num %d %d",num,contador);
			}
			contador++;
			pot = pot * 10;		
		}
		contador=1;
		printf ("teste %d %d %d",num,valid,valor);
		getchar ();
		
	}
	return num;
}

int main()
{	int valor;
	printf ("Insira um valor: ");
	scanf ("%d",&valor);
	printf ("Numero = %d",prox(valor));
}




