#include <stdio.h>

int main()
{	float soma=1, d=2, e;

	printf ("Digite um valor para E: ");
	scanf("%f",&e);

	while ((1/d)>=e)
	{	soma = soma + (1/d);
		d = d + 2;	
	}
	printf ("Soma = %f",soma);
}
