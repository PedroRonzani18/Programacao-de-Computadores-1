#include <stdio.h>

int main()
{	float soma=0, n=1, d=1;
	
	while (n<=99 && d<=50)
	{	soma = soma + (n/d);
		n = n + 2;
		d++;	
	}
	
	printf ("soma = %f",soma);
}
