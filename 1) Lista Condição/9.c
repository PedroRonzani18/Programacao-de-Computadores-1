 #include <stdio.h>

main(){

	int x,y;
	printf("\n\nInsira coordenadas x e y: ");
	scanf("%d %d",&x,&y);

	if ( x==0 && y==0 ) printf ("Origem");
	if ( x==0 && y!=0 ) printf ("Eixo y");
	if ( x!=0 && y==0 ) printf ("Eixo x");

	if (x>0 && y!=0) {
		if (y>0) printf ("Primeiro Quadrante");
		else printf ("Quarto Quadrante");
			 }

	if (x<0 && y!=0) {
		if (y>0) printf ("Segundo Quadrante");
		else printf ("Terceiro Quadrante");
			 }
}
