#include <stdio.h>

int main()
{	int dentro=0, fora=0, quant, num, contador=1;

	printf ("Digite a quantidade de valores a serem testados: ");
	scanf ("%d",&quant);
	
	while (contador<=quant)
	{	printf ("Digite um valor: ");
		scanf ("%d",&num);
		if (10<=num && num<=20) dentro ++;
		else fora++;
		contador++;	
	}
	printf ("%d numeros fora\n%d numeros dentro",fora,dentro);
}
