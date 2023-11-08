#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto.txt","r");

	int *n = malloc (1*sizeof(int));
	int t=1;
	
	for(int i=0; (fscanf(f,"%d\n",&n[i])) != EOF; i++)
	{	t++;
		n = realloc(n,t * sizeof(int));
	}
	
	int maior = n[0], menor = n[0], ap=0, rep=0;
	
	for(int i=0; i<t-1; i++)
	{	if (n[i] > maior) maior = n[i];
		if (n[i] < menor) menor = n[i];
		if (n[i] >=60) ap++;
		if (n[i] < 60) rep++;
	}
	
	printf("Maior: %d Menor: %d Ap: %d Rep: %d",maior,menor,ap,rep);
}
