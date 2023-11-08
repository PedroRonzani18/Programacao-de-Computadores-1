/*Exercícios 07 - Lista Repetição*/

#include <stdio.h>

main(){

	int numero, contador=0, divisores=0;
	printf ("Escreva um numero: ");
	scanf("%d",&numero);

	while (contador < numero)
	{	contador++;
		if (numero % contador == 0) divisores++;
	}

	if (divisores==2) printf ("Primo");
	else printf ("Nao primo");
}
