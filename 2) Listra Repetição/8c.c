#include <stdio.h>

int primo(int num)
{	int d=1, divisores=0;

	printf ("Digite um numero: ");
	scanf("%d",&num);
	
	if (num!=2 && num%2==0) return 0;
	
	while (d<=(num/2))
	{	if (num%d==0) divisores++;
		d++;	
	}
	if (divisores==2) return 1;
	else return 0;
}

int main()
{	int num;
	
	printf ("Digite um valor: ");
	scanf("%d",num);
	if (primo(num)==1) printf ("Primo");
	else printf ("Nao Primo")
}
