#include <stdio.h>
#include <stdlib.h>

void calc(int *v, int num, int *xmin, int *xmax)
{	int maior = -1;
	int menor = v[0];

	for(int i=0; i< num; i++)
	{	if(v[i] > maior) maior = v[i];
		if(v[i] < menor) menor = v[i];
	}
	
	*xmax = maior;
	*xmin = menor;
	
	printf("xmin: %p\nxmiax: %p\n",xmin,xmax);
}

int main()
{	int *v =  malloc(10*sizeof(int));
	int *xmin = malloc(1 * sizeof(int)), *xmax = malloc(4), num;
	
	for(int i=0; i < 10; i++) v[i] = rand()%20;
	
	printf("Vetor: "); for(int i=0; i<10; i++) printf("%d, ",v[i]); printf("\n");
		
	printf("Quantidade de numeros a serem testados: ");
	scanf("%d",&num);
	
	calc(v,num,xmin,xmax);             
}

