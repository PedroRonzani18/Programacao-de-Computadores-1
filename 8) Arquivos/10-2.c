#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto.txt","r");

	int *mat = malloc(1 * sizeof(int));
	int *num = malloc(1 * sizeof(int));
	float *som = malloc(1 * sizeof(float));
	int t=1;
	float soma=0;
	
	for(int i=0; (fscanf(f,"%d %d",&mat[i],&num[i])) != EOF; i++)
	{	t++;
		mat = realloc(mat, t * sizeof(int));
		num = realloc(num, t * sizeof(int));
		som = realloc(som, t * sizeof(float));
		
		for(int j=0; j<num[i]; j++)
		{	fscanf(f," %f",&soma);
			som[i] = som[i] + soma;
		}
		soma = 0;
	}
	
	printf("mat: "); for(int i=0; i<t-1; i++) printf("%d, ",mat[i]); printf("\n");
	printf("num: "); for(int i=0; i<t-1; i++) printf("%d, ",num[i]); printf("\n");
	printf("som: "); for(int i=0; i<t-1; i++) printf("%f, ",som[i]); printf("\n");
}
