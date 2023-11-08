#include <stdio.h>
#include <stdlib.h>

void preencher(int m[4][5])
{	int i=0, j=0;

	while(i<4)
	{	while (j<5)
		{	m[i][j] = rand()%11;
			j++;		
		}
		j=0;
		i++;
	}	
}

void exibir (int m[4][5])
{	int i=0, j=0;

	while (i<4)
	{	while (j<5)
		{	printf("[%d] ",m[i][j]);
			j++;		
		}
		printf ("\n");
		j=0;
		i++;
	}
}

void nump (int m[4][5])
{	int i=0, j=0, cont=0;

	while (i<4)
	{	while (j<4)
		{	if(m[i][j]%2==0) cont++;
			j++;		
		}
		j=0;
		i++;	
	}
	printf ("Quantidade de numeros pares: %d\n",cont);
}

int main()
{	int m[4][5];

	preencher(m);
	exibir(m);
	nump(m);

}
