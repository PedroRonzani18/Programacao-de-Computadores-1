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
{	int valid = 1;
	
	while (valid==1)
	{	num++;
		if (primo(num)==1) valid=0;	
	}
	return num;
}

int main()
{	int num;

	printf ("Digite um numero: ");
	scanf ("%d",&num);
	printf ("O numero primo maix proximo e: %d\n\n",proximo(num));
}
