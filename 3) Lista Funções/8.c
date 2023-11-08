#include <stdio.h>

int primo (int n)
{	int d=1, divisores=0;

	while (d<=n)
	{   if (n%d==0) divisores++;
        d++;
	}

	if (divisores==2) return 1;
	else return 0;
}

int soma_primo (int ordem)
{	int soma=0, numero=1, cp=1 ;
	while (cp<=ordem)
	{	if (primo(numero)==1)
        {   soma = soma + numero;
            cp++;
        }
        numero++;
	}
	return soma;
}

int main()
{	int ordem;

	printf("Escolha numero de primos: ");
	scanf("%d",&ordem);
	printf ("Soma = %d",soma_primo(ordem));

}
