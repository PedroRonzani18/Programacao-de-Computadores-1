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
{	int soma=0, contador=1;
	while (contador<=100)
	{	soma = soma + (proximo(contador)/contador);
		contador++;	
	}
	printf ("Soma = %d",soma);
}
