/*Exercícios 07 - Lista Repetição*/

#include <stdio.h>

main(){

	while (1){

	int numero, contador=0, divisores=0;

	printf ("\n\nEscreva um numero: ");
	scanf("%d",&numero);

	if (numero==2) printf ("Primo");

	else
    {   while (contador <= (numero/2))
        {	contador++;
            if (((contador % 2) != 0) && (numero % contador == 0))divisores++;
        }

        if (divisores==2) printf ("Primo");
        else printf ("Nao primo");
	}
	}
}
