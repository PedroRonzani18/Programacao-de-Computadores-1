#include <stdio.h>

int main()
{	int x=1, y=1, soma=0, contador=0;

	while (1)
	{	printf ("Digite os valores de x e y positivos não nulos: ");
		scanf ("%d %d",&x,&y);
		
		if (x==0 || y==0) break;
		if (x>y)
		{	int z=x;
			x=y;
			y=z;		
		}
			
		while (x<=y)
		{	soma = soma + x;
			x++;		
		}
		printf ("soma = %d\n\n",soma);
		soma=0;
	}	

}
