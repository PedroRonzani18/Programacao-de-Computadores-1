#include <stdio.h>

int tempo (int hi, int mi, int hf, int mf)
{	int soma=0;

	if (hi<hf)
	{	if (mi<=mf) soma = soma + (hf - hi)*60 + (mf - mi);
	 	if (mi>mf) soma = soma + (hf - hi - 1)*60 + (60 - mi + mf);	 
	}
	 
	if (hi > hf)
	{	if (mi<=mf) soma = soma + (24 - hi + hf)*60 + (mf - mi);
		if (mi>mf) soma = soma + (24 - hi + hf-1)*60 + (60 - mi + mf);
	}
	
	if (hi = hf)
	{	if (mi<=mf) soma = soma + (mf - mi);
		if (mi>mf) soma = soma + 23*60 + (60-mi+mf);
	
	
	}
	return soma;
}

int main ()
{	int hi, hf, mi, mf;

	printf ("Insira a hora inicial: ");
	scanf ("%d %d",&hi,&mi);
	printf ("Insira a hora final: ");
	scanf ("%d %d",&hf,&mf);
	
	printf ("Tempo deccorido foi de %d minutos\n\n",tempo(hi,mi,hf,mf));

}
