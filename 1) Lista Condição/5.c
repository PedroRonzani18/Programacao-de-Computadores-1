#include <stdio.h>

main(){

	int x,y,z;
	printf ("Insira 3 numeros: ");
	scanf ("%d %d %d",&x,&y,&z);

	if (x==y && x==z && y==z) printf ("3 numeros sao iguais");

	if (x==y && x!=z) printf ("2 numeros sao iguais");

	if (x!=y && x==z) printf ("2 numeros sao iguais");

	if (x!=z && y==z) printf ("2 numeros sao iguais");

	if (x!=z && y!=z && x!=y) printf ("Todos sao diferentes");

}
