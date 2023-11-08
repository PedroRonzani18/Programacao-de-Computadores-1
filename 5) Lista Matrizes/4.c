#include <stdio.h>
#include <stdlib.h>

int preencher(int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	m[i][j] = rand()%11;
			j++;		
		}	
		i++;
		j=0;
	}
}

int exibir (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	printf("[%d] ",m[i][j]);
			j++;		
		}
		i++;
		j=0;
		printf ("\n");	
	}	
}

void maior(int m[4][5])
{	int i=0, j=0, cont=0;
	float media=0, soma=0;
	
	while(i<4)
	{	while (j<5)
		{	soma = soma + m[i][j];
			j++;			
		}
		i++;
		j=0;	
	}
	i=0;
	
	media = soma/20.0;
	
	while (i<4)
	{	while (j<5)
		{	if(m[i][j] > media) cont++;
			j++;		
		}
		i++;
		j=0;
	}
	
	printf ("Média: %.2f\nQuantidade de numeros maiores que a media: %d\n",media,cont);		
}

int main()
{	int m[4][5];

	preencher(m);
	exibir(m);
	maior(m);

}
