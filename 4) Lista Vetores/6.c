#include <stdio.h>
#include <stdlib.h>

int dif (int v[])
{	int ci=0, cf=14, dif=0, maiordif=0;

	while (ci!=cf)
	{	while (ci<cf)
		{	dif = v[ci] - v[cf];
			if (dif<0) dif = dif * (-1);
			if (dif>maiordif) maiordif = dif;
			ci++;	
		}
		ci=0;
		cf--;
	}
	return maiordif;
}

int main()
{	int v[15], cont=0;

	while (cont<=14)
	{	v[cont]=rand()%10;
		cont++;	
	}
	cont=0;
	
	printf ("Numeros dentro do vetor: ");
	
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	cont=0;
	
	printf ("\nMaior diferença absoluta entre numeros: %d\n",dif(v));
}
