#include <stdio.h>

int proximo(int n)
{	int num=n, num1=num, v1=1, contador=1, vg=1;

	while(vg==1)
	{	num = n * contador;
		num1=num;
		v1=1;
				
		while (num>=1 && v1==1)
		{	if ((num%10) > 2) v1=0;
			else num = num/10;	
		}
		
		if (v1==1) vg=0;		
		contador++;
		num = num1;		
	}
	return num1;	
}

int main()
{	int n;

	printf ("Insira um numero: ");
	scanf ("%d",&n);
	printf ("Proximo numero = %d\n",proximo(n));
}
