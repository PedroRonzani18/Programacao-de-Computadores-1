#include <stdio.h>

int primo(int num)
{	int d=1, divisores=0;

	while (d<=num)
	{	if (num%d==0) divisores++;
		d++;
	}
	if (divisores==2) return 1;
	else return 0;
}

int posicao(int num)
{	int contador=1, posicao=0;

	while (contador<=num)
	{	if (primo(contador)==1) {posicao++;}
		contador++;
	}
	return posicao;
}

main()
{	int x,y,mmc=1,d,contador=0;

	printf ("Digite dois numeros: ");
	scanf("%d %d",&x,&y);

	while ((x>1) || (y>1))
	{	contador++;
		d = posicao(contador);

		if ((x%d==0) && (y%d==0))
            {while (x%d==0 && y%d==0)
                {	mmc = mmc * d;
                    x = x/d;
                    y = y/d;
                }
            }

		else
		{	if (x%d==0)
            {   while (x%d==0)
                {	mmc = mmc * d;
                    x = x/d;
                }
            }

			if (y%d==0)
            {   while (y%d==0)
                {	mmc = mmc * d;
                    y = y/d;
                }
            }
		}
	}
	printf ("MMC = %d",mmc);
}

