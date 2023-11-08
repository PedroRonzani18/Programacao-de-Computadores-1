/*Exercício 04 - Lista Repetição*/

#include <stdio.h>

main()
{
	int numero, contador, resultado=1;

	printf("Digite um valor para encontrar seu fatorial: ");
	scanf("%d",&numero);
	contador = numero;

	if (numero<0) printf ("Valor inválido");

	else
	{	while (contador<=numero && contador>0)
		{resultado = resultado * contador;
         contador--;
		}
		printf ("%d! = %d",numero,resultado);
	}
}
