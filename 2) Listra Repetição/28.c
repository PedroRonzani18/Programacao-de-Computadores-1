#include <stdio.h>

main(){

	int x=1,y=1, soma=0;

	while (x>0 && y>0)
	{	soma = 0;
	    printf ("Digite dois valores: ");
		scanf("%d %d",&x,&y);

		if (x==0 || y==0) printf ("\nFim do Programa\n");
        else
        {   if (x>y)
            {	while (y<=x)
                {	printf ("%d ",y);
                    soma = soma + y;
                    y++;
                }printf ("Soma = %d\n\n",soma);
            }

            else
            {	while (x<=y)
                {	printf ("%d ",x);
                    soma = soma + x;
                    x++;
                }printf ("Soma = %d\n\n",soma);
            }
        }
	}
}
