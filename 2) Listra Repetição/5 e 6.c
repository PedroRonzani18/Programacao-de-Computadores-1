/*Exercícios 05 e 06 - Lista Repetição*/

#include <stdio.h>

main()
{
	int n1,n2,contador,soma=0,validade=1,numero;

	while (validade == 1)
	{
		printf ("Digite dois numeros, em ordem crescente: ");
		scanf ("%d %d",&n1,&n2);

		if (n1>n2)
		{	printf ("\n  Era em ordem C R E S C E N T E!\n\n");
			validade = 1;
		}

		else validade = 0;
	}

	contador = n1;
	while (n1<=contador && contador<=n2)
	{
		if (contador%2 == 1) soma = soma + contador;

		contador++;
	}

	printf ("Soma = %d",soma);
}
