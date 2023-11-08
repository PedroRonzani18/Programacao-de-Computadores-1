#include <stdio.h>

main()
{
	int quant, dentro=0, fora=0, contador=0, num;

	printf("Digite a quantidade de valores: ");
	scanf("%d",&quant);

	while (contador<quant)
	{	contador++;
		printf("Digite um valor: ");
		scanf("%d",&num);

		if (10<=num && num<=20) dentro++;
		else fora++;
	}

	printf ("\n%d numeros dentro do intervalo\n%d numeros fora do intervalo\n",dentro,fora);
}
