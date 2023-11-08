#include <stdio.h>

main(){

	int x,y,soma=0,contador=0;

	printf ("Digite dois numeros em ordem crescente: ");
	scanf ("%d %d",&x,&y);

	while (x>=y)
    {scanf(" %d",&y);}

	while (soma<y)
	{	soma = soma + x;
		x++;
		contador++;
	}

	printf ("numeros = %d",contador);}
