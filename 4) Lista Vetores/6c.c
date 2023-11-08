#include <stdio.h>
#include <stdlib.h>

//a maior diferença em valor absoluto entre elementos consecutivos do vetor

int preencher(int v[])
{
	for(int contador = 0; contador<15; contador++)
		v[contador] = rand()%11;
}

int exibir(int v[])
{
	printf("Os números no vetor são: \n");
	for(int contador = 0; contador<15; contador++)
		printf("%d, ",v[contador]);
}

int diferenca(int v[])
{
	int diferenca;
	int maior_dif = -1;
	for(int contador = 0; contador<14; contador++)
	{
		diferenca = v[contador] - v[contador+1];
		if(diferenca<0)
			diferenca = diferenca * -1;
		if(maior_dif<diferenca)
			maior_dif = diferenca;
	}
	printf("\nA maior diferença entre elementos consecutivos do vetor é de %d\n", maior_dif);
}

int main(void)
{
	system("clear");
	int v[15];
	preencher(v);
	exibir(v);
	diferenca(v);
}
