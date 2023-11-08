#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f1 = fopen ("texto1.txt","r");
	FILE *f2 = fopen ("totais.txt","w");
	
	int *mat = malloc (1 * sizeof(int));
	float *vsoma = malloc( 1 * sizeof(int));
	int num, t=0;
	float inter, soma = 0;
	
	for(int i=0; fscanf(f1,"%d %d",&mat[i],&num) != EOF; i++,t++)
	{	mat = realloc(mat,(i+1) * sizeof(int));
	
		for(int j=0; j<num; j++)
		{	fscanf(f1," %f",&inter);
			soma = soma + inter;
		}
		vsoma[t] = soma;
		soma = 0;
		vsoma = realloc(vsoma,(i+1) * sizeof(float));
	}
	
	printf("mat: "); for(int i=0; i<4; i++) printf("%d, ", mat[i]); printf("\n");
	printf("vsoma: "); for(int i=0; i<4; i++) printf("%.2f, ", vsoma[i]); printf("\n");
	
	for(int i=0; i<t; i++)
	{	fprintf(f2,"%d %.1f\n",mat[i],vsoma[i]);
	}	
}
