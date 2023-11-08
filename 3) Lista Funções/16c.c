#include <stdio.h>

int primo (int num)
{	int d=1, divisores=0;

	while (d<=num)
	{	if (num%d==0) divisores++;
		d++;	
	}
	if (divisores==2) return 1;
	else return 0;
}

int proximo (int num)
{	num++;

	while (1)
	{	if (primo(num)==1) return num;
		else num++;	
	}
}

int main()
{	int num;

	printf ("Digite um numero: ");
	scanf ("%d",&num);
	printf ("O proximo primo é %d",proximo(num));

}
