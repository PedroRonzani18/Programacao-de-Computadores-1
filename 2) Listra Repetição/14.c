#include <stdio.h>

main(){

	int soma=0, numero=1;

	while (numero<1000)
	{	if (numero%3==0 || numero%5==0) soma = soma + numero;
		numero ++;
	}
	printf ("Soma = %d",soma);
}
