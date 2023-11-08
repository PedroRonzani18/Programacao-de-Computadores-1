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
{	int num=valor-1, valid=1, pot=10, contador=1, num1=valor-1;

	while (valid==1)
	{	num++;
		num1++;
		contador=1;
		
		while (contador<=casas(valor) && valid==1) // verificar digitos
		{	if ((num%pot)>=3) {valid = 0;}			
			pot = pot * 10;
			contador++;
			num = num - (num%pot);

		}
		
		if (valid==1) //verificar divisibilidade
		{	if ((num1%valor)==0) {return num1;}
			else valid=0;	
		}		
		valid=1;


	}
}

int main()
{	int valor;
	printf ("Insira um valor: ");
	scanf ("%d",&valor);
	printf ("Numero = %d\n",prox(valor));
}




