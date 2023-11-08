#include <stdio.h>

main(){

	float n=-1, d=0, numero, soma=0, contador=0;

	while (n<=99)
	{	n = n + 2;
		d = d + 1;
		soma = soma + n/d;
	}

	printf ("Soma = %f",soma);

}
