#include <stdio.h>

int casas(int num)
{	int casas=0;

	while (num>1)
	{	casas++;
		num = num/10;	
	}
	return casas;
}

int main()
{	int a,b;
	int x0=0, x1=0, x2=0, x3=0, x4=0, x5=0, x6=0, x7=0, x8=0, x9=0;

	printf ("Digite os valores de a e b: ");
	scanf ("%d %d",&a,&b);
	
	int ac = a;
	
	while (a<=b)
	{	while (a>=1)
		{	if (a%10==0) x0++;
			if (a%10==1) x1++;
			if (a%10==2) x2++;
			if (a%10==3) x3++;
			if (a%10==4) x4++;
			if (a%10==5) x5++;
			if (a%10==6) x6++;
			if (a%10==7) x7++;
			if (a%10==8) x8++;
			if (a%10==9) x9++;
			a = a/10;
		}
		ac++;	
		a = ac;	
	}
	printf ("%d %d %d %d %d %d %d %d %d %d\n",x0,x1,x2,x3,x4,x5,x6,x7,x8,x9);
	
}

