#include <stdio.h>

main (){

	int contador=0;
    float  n=1, d=1, numero, soma=0;

	while (n<=10.0)
	{	contador++;
        numero = n/d;

	    if (contador%2 != 0) soma = soma + numero;

		else soma = soma - numero;

        n++;
        d = n * n;
    }
	printf ("Soma = %f",soma);
}
