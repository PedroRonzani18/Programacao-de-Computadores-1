#include <stdio.h>

main(){
	int quant, max, c1=0, c2=0, contador=0;

	printf ("Determine a q/linha e o maximo: ");
	scanf ("%d %d",&quant,&max);

	while (c2<max)
	{	while (c1<quant)
		{	c1++;
            c2++;
			contador++;
			printf ("%d ",contador);
		}
		printf ("\n");
		c1=0;
	}
}
