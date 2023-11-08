#include <stdio.h>

int casas (float num)
{	int casas=0;

	if (num==0) return 1;	

	while (num>=1)
	{	casas++;
		num = num/10;	
	}
	return casas;
}

int main ()
{	int a0=0, a1=0, a2=0, a3=0, a4=0, a5=0, a6=0, a7=0, a8=0, a9=0;
	int i, f;
	
	printf ("Digite dois numeros: ");
	scanf ("%d %d",&i,&f);
	
	int icq=i;
	int contador=1;
	
	while (i<=f)
	{	while (contador<=casas(ic))
		{	if (i%10==0) a0++;
			if (i%10==1) a1++;
			if (i%10==2) a2++;
			if (i%10==3) a3++;
			if (i%10==4) a4++;
			if (i%10==5) a5++;
			if (i%10==6) a6++;
			if (i%10==7) a7++;
			if (i%10==8) a8++;
			if (i%10==9) a9++;
			i = i/10;
			contador++;
		}
		ic++;
		i = ic;		contador=1;	
	}	
	printf ("%d %d %d %d %d %d %d %d %d %d\n",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);	
}
