#include <stdio.h>

main(){

	float soma=0, numero, d=1;
    int contador=0;

    numero = 4/d;

	while (numero>=0.0001)

	{	if (contador %2 != 0) soma = soma - numero;
		else soma = soma + numero;
		contador++;
		d = d + 2;
        numero = 4/d;
	}

	printf ("Pi = %f",soma);
}
