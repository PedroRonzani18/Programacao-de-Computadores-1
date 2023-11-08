#include <stdio.h>

int main()
{	int x,y, c1=1, c2=1;

	printf  ("Digite os valores de x e y: ");
	scanf ("%d %d",&x,&y);
	
	while (c1<=y)
	{	while (c2<=x)
		{	printf ("%d ",c1);
			c2++;
			c1++;		
		}	
		printf ("\n");
		c2=1;
	}
}
