#include <stdio.h>

main(){

	int hi, hf, hp=0, mi, mf, mp=0, soma=7;

	printf ("Escreva a hora de inicio: ");
	scanf("%d %d",&hi,&mi);
	printf ("Escreva a hora de fim: ");
	scanf ("%d %d",&hf,&mf);

	if (hi==hf)
    {   if (mi < mf) mp = mf - mi;
        if (mi == mf) hp = 24;
        if (mi > mf)
        {   hp = 23;
            mp = 60 - (mi - mf);
        }
    }

	if (hi < hf)
	{	if (mi <= mf)
		{	hp = hf - hi;
			mp = mf - mi;
		}

		if (mi > mf)
		{	hp = hf - hi - 1;
			mp = 60 - (mi - mf);
		}
	}

    if (hi > hf)
	{	if (mi <= mf)
		{	hp = 24 - hi + hf;
			mp = mf - mi;
		}

		if (mi > mf)
		{	hp = 24 - hi + hf - 1;
			mp = 60 - (mi - mf);
		}
    }

    soma = hp*60 + mp;
	printf ("Tempo total = %d minutos",soma);
}
