#include <stdio.h>

int main()
{	float d=1, soma=0, num = 4/d;
	int contador=1,  sinal;

	while (num>=0.0001)
	{	if (contador%2==0) sinal=-1;
		else sinal = 1;
		
		soma = soma + sinal*(4/d);
		d = d+2;
		num = 4/d;
		contador++;
	}	
	
	printf ("Pi = %f\n",soma);
}
