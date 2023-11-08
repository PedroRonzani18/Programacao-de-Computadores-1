#include <stdio.h>

main(){

	int numero=3, soma=0, maximo;
	printf ("Escolha o valor maximo: ");

	scanf("%d",&maximo);

	while(numero<=maximo)
	{	soma = soma + (5*numero + 2);
		numero++;
	}
	printf ("Somatorio = %d",soma);
}
