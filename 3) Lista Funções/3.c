#include <stdio.h>

main()
{	int x, y, soma=0, valid=1;

	while (valid==1)
	{	printf("Digite dois numeros: ");
		scanf("%d %d",&x,&y);

		if (x<y) valid=0;
	}

	while (x<=y)
	{	if (x%2!=0) soma = soma + x;
		x++;
	}

	printf ("Soma = %d",soma);
}
