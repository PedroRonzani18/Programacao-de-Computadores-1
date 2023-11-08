#include <stdio.h>

main(){

	int x;
	printf ("Digite um numero: ");
	scanf("%d",&x);

	if (x%2!=0) printf ("%d e impar",x);
	else printf ("%d e par",x);

}
