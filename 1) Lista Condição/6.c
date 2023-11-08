#include <stdio.h>

main(){

	int x;
	printf("Escreva 1, 5 ou 10: ");
	scanf("%d",&x);

	if ( x!=1 && x!=5 && x!=10 ) printf ("Valor invalido");

	else printf("Valor valido");

}
