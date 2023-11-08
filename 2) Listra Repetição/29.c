#include <stdio.h>

main(){

	int max, num, contador=1, maior=0, posi;

	printf("Digite a quantidade de valores: ");
	scanf("%d",&max);

    printf ("Digite o 1o valor: ");
    scanf("%d",&num);
    maior = num;


	while (contador<max)
	{	contador++;
		printf ("Digite o %do valor: ",contador);
		scanf("%d",&num);

		if (num>maior)
		{	maior = num;
			posi = contador;
		}
	}
	printf ("O maior valor informado foi %d na posicao %d",maior,posi);

}
