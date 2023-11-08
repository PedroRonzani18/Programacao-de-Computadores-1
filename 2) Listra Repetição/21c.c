#include <stdio.h>

int MMC (int x, int y)
{	int d=2, mmc = 1;

	while (x>1 || y>1)
	{	while ((x%d==0) && (y%d==0))
		{	mmc = mmc * d;
			x = x / d;
			y = y / d;		
		}
		
		while (x%d==0)
		{	mmc = mmc * d;
			x = x / d;
		}
		
		while (y%d==0)
		{	mmc = mmc * d;
			y = y / d;
		}
	d++;	
	}
	return mmc;
}

int main()
{	int x, y, d;

	printf ("Digite dois numeros: ");
	scanf ("%d %d",&x,&y);
	printf ("MMC entre %d e %d é %d",x,y,MMC(x,y));
}

