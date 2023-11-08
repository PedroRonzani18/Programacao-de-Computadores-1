#include <stdio.h>

int primo (int num)
{	int d=1, divisores=0;

	while (d<=num)
	{	if (num%d==0) divisores++;
		d++;
	}
	if (divisores==2) return 1;
	else return 0;
}

int grau (int num)
{	int posi=0, contador=1;

	while (contador<=num)
	{	if (primo(contador)==1) posi++;
		contador++;
	}
	return contador;
}

int MMC(int x, int y)
{	int mmc=1, divisor, contador=1;

	while (x>1 || y>1)
	{	divisor = grau(contador);

		if ((x%divisor==0) || (y%divisor==0))
            	{	while ((x%divisor==0) && (y%divisor==0))
                	{   mmc = mmc * divisor;
                    	x = x/divisor;
                    	y = y/divisor;
                	}
            	}

		if (x%divisor==0)
		{	while (x%divisor==0)
                	{   mmc = mmc * divisor;
				x = x/divisor;
                	}
                }

                if (y%divisor==0)
                {   while (y%divisor==0)
                    {	mmc = mmc * divisor;
                        y = y/divisor;
                    }
                }

		contador++;
        	printf ("\n%d %d %d\n",x,y, divisor);

	}
	return mmc;
}

int main()
{	int x,y;
	printf ("Digite dois numeros: ");
	scanf ("%d %d",&x,&y);
	printf ("MMC = %d",MMC(x,y));
}
