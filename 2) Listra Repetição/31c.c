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
{	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;
	int i, f;
	
	printf ("Digite dois numeros: ");
	scanf ("%d %d",&i,&f);
	
	int ic=i, fc=f;
	int cont=ic;
	int contador=1;
	
	while (cont<=fc)
	{	while (contador<=casas(cont))
		{	if (cont%10==0) a0++;
			if (cont%10==1) a1++;
			if (cont%10==2) a2++;
			if (cont%10==3) a3++;
			if (cont%10==4) a4++;
			if (cont%10==5) a5++;
			if (cont%10==6) a6++;
			if (cont%10==7) a7++;
			if (cont%10==8) a8++;
			if (cont%10==9) a9++;
			cont = cont/10;
			contador++;	
		}
		i++;
		cont=ic;
		contador=1;	
	}
	
	printf ("%d %d %d %d %d %d %d %d %d %d",a0,a1,a2,a3,a4,a5,a6,a7,a8,a9);	


}
