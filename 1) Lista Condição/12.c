#include <stdio.h>

main(){

	int x,y,z;
	printf ("Escreva 3 numeros: ");
	scanf ("%d %d %d",&x,&y,&z);

	if (x<y && y<z) printf ("%d < %d < %d",x,y,z);
	if (x<z && z<y) printf ("%d < %d < %d",x,z,y);
	if (y<x && x<z) printf ("%d < %d < %d",y,x,z);
	if (y<z && z<x) printf ("%d < %d < %d",y,z,x);
	if (z<x && x<y) printf ("%d < %d < %d",z,x,y);
	if (z<y && y<x) printf ("%d < %d < %d",z,y,x);

}
