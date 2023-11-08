#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto1.txt","r");

	if(f == NULL)
	{	printf("Erro de Abertura");
		system("pause");
		exit(1);
	}	
	
	int *v = malloc(1 * sizeof(int));
	int t=0;
	
	for(int i=0; fscanf(f,"%d\n",&v[i]) != EOF; i++)
	{	v = realloc(v,(i+1) * sizeof(int));
		t++;	
	}
	
	int maior = v[0], menor = v[0], quant=0;
	
	for(int i=0; i<t; i++)
	{	if(v[i] > maior) maior = v[i];
		if(v[i] < menor) menor = v[i];
		if(v[i] >=60) quant++;
		printf("v[i] = %d || i = %d\n",v[i],i);
	}
	
	printf("Maior: %d\nMenor: %d\nAprovados: %d\n",maior,menor,quant);
}
