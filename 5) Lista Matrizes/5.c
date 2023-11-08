#include <stdio.h>
#include <stdlib.h>

void preencher (int m[4][5])
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

void exibir (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	printf ("[%d] ",m[i][j]);
			j++;
		}
		i++;
		j=0;	
		printf ("\n");
	}
}

void maior(int m[4][5])
{	int i=0, j=0, maior=-1;

	while (i<4)
	{	while (j<5)
		{	if (m[i][j] > maior)
			{	maior = m[i][j];		
			}
			j++;		
		}
		i++;
		j=0;	
	}
	printf ("Maior valor da matriz: %d\n",maior);

}

int main()
{	int m[4][5];

	preencher(m);
	exibir(m);
	maior(m);

}
