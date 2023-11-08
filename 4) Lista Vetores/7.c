#include <stdio.h>
#include <stdlib.h>

int crescente (int v[])
{	int ci=0, cf=14, temp;

	while (ci!=cf)
	{	while (ci<cf)
		{	if (v[ci] > v[cf]) 
			{	temp = v[ci];
				v[ci] = v[cf];
				v[cf] = temp;		
			}
			cf--;
		}
		cf=14;
		ci++;
	}
}

int main()
{	int v[15], cont=0;

	while (cont<=14)
	{	v[cont]=rand()%10;
		cont++;	
	}
	cont=0;
	
	printf ("Numeros dentro do vetor inicial: ");
	
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	cont=0;
	
	crescente(v);
	
	printf ("\nNumeros dentro do vetor final: ");
	
	while (cont<=14)
	{	printf ("%d ",v[cont]);
		cont++;	
	}
	cont=0;
	
	printf ("\n");

}
