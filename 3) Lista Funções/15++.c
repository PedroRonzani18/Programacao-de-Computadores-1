#include <stdio.h>

int MMC (int x, int y)
{   int d=2, mmc=1;
    while (x>1 || y>1)
    {   while ((x%d==0) && (y%d==0))
        {   x = x/d;
            y = y/d;
            mmc = mmc * d;
        }

        while (x%d==0)
        {   x = x /d;
            mmc = mmc * d;
        }

        while (y%d==0)
        {   y = y /d;
            mmc = mmc * d;
        }
        d++;
    }
    return mmc;
}

int main()
{   int x, y;

    printf ("Digite dois valores: ");
    scanf ("%d %d",&x,&y);
    printf ("MMC entre %d e %d é %d",x,y,MMC(x,y));
}