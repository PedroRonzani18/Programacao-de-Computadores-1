#include <stdio.h>

main(){

	int x,y;
	printf("Escreva dois números: ");
	scanf("%d %d",&x,&y);

	if (x>y) printf("%d é maior que %d",x,y);

	if (x<y) printf("%d é maior que %d",y,x);

}
