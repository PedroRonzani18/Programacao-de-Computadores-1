#include <stdio.h>
#include <stdlib.h>

void preencher (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	m[i][j] = rand()%11;
			j++;		
		}	
		j = 0;
		i++;
	}
}

void exibir (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	printf ("[%d] ",m[i][j]);
			j++;		
		}
		printf ("\n");
		j=0;
		i++;	
	}
}

void somai (int m[4][5])
{	int i=0, j=0, soma;

	while (i<4)
	{	while (j<5)
		{	if (m[i][j]%2!=0) soma = soma + m[i][j];
			j++;	
		}
		i++;
		j=0;
	}
	printf ("Soma dos impares: %d\n",soma);
}

int main()
{	int m[4][5];

	preencher(m);
	exibir(m);
	somai(m);

}
