#include <stdio.h>

main(){

    int E;

	printf ("Digite o valor limite: ");
    scanf("%d",&E);

    int contador=0,n=1,d;
	float soma=1;

	while ((n/d)>=E)
	{	d = d + 2;
		soma = soma + n/d;
	}

	printf ("Soma = %d",soma);

}
