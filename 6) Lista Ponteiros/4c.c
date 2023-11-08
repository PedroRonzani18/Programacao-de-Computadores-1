#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calc(int *v, int num, int *xmin, int *xmax);

int main()
{	int *v = malloc(20 * sizeof(int)), num;
	int *xmin = malloc (1 * sizeof(int));
	int *xmax = malloc (1 * sizeof(int));
	
	srand(time(0));
	
	printf("Num: "); scanf("%d",&num);

	printf("Vetor: ");
	for(int i=0; i<num; i++) 
	{	v[i] = rand()%15;
		printf("%d, ",v[i]);
	}
	printf("\n");	
	
	calc(v,num,xmin,xmax);
	
	printf("xmin = %d\nxmax = %d\n",*xmin,*xmax);
}

void calc(int *v, int num, int *xmin, int *xmax)
{	int maior = v[0], menor = v[0];
	
	for(int i=0; i < num; i++)
	{	if(v[i] > maior) maior = v[i];
		if(v[i] < menor) menor = v[i];
	}
	
	*xmin = menor;
	*xmax = maior;	
}
