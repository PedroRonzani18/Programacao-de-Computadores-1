#include <stdio.h>

main(){

	int x,y;
	printf("Escreva dois numeros diferentes: ");
	scanf("%d %d",&x,&y);

	if (x==y) printf ("Esses números sao iguais");

	if (x>y) printf ("%d > %d",x,y);

    if (x<y) printf ("%d > %d",y,x);
}
