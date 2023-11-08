#include <stdio.h>

int menor(int min, int max)
{	int num=1, v1=1, v2=1;
	int minc = min;

	while (v1==1)
	{	while (min<=max && v2==1)
		{	if (num%min!=0) v2=0;
			else min++;	
		}
		if (min>max) v1=0;
		min = minc;
		v2=1;
		num++;	
	}
	return num-1;

}

int main()
{	int min, max;
		
	printf ("Digite os limites maximo e minimmo: ");
	scanf ("%d %d",&min,&max);
	printf ("O menor numero é %d",menor(min,max));
}
