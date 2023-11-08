#include <stdio.h>

int main()
{	int n, contador=1;

	printf ("Digite um valor para n: ");
	scanf ("%d",&n);
	
	while (contador<=n)
	{	printf ("%d %d %d\n",contador,contador*contador,contador*contador*contador);
		contador++;	
	}
}
