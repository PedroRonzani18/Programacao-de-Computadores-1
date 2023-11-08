#include <stdio.h>

int primo (int n)
{	int d=1, divisores=0;

	while (d<=n)
	{   if (n%d==0) divisores++;
        d++;
	}

	if (divisores==2) return 1;
	else return 0;
}
