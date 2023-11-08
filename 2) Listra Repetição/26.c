#include <stdio.h>

main(){

	int a=0,n=0,c=1,soma=0, contador=0;

	while (c==1)
	{	printf ("Digite os valores de A e N: ");
		scanf ("%d %d",&a,&n);
        if (a>0 && n>0) {c=0;}
	}

	while (contador<=n-1)
	{   soma = soma + a;
		contador++;
		a++;
	}
	printf ("Soma = %d",soma);
}
