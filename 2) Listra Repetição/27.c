#include <stdio.h>

main()
{
	int soma=0, num, d=1;

	printf ("Digite um numero: ");
	scanf("%d",&num);

	while (d<num)
	{   if (num%d==0)soma = soma + d;
        d++;
	}

	if (soma==num) printf ("%d = perfeito",num);
	else printf ("%d = NAO perfeito",num);
}
