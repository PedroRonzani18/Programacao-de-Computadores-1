#include <stdio.h>
#include <stdlib.h>

int* preencher(int *q, int *r, int *ttam);

int main()
{	int *q = malloc(12 * sizeof(int));
	int *r = malloc(20 * sizeof(int));
	int *t;
	
	printf("Q: "); 
	
	for(int i=0; i<12; i++)
	{	q[i] = rand()%10;
		printf("%d, ",q[i]);
	}
	printf("\n");
	
	printf("R: "); 
	
	for(int i=0; i<20; i++)
	{	r[i] = rand()%10;
		printf("%d, ",r[i]);
	}
	printf("\n");
	
	int *w = preencher(q,r,t);
	
	printf("W: ");
	for(int i=0; i<*t; i++) printf("%d, ",w[i]); printf("\n");
	
	free(q); free(r); free(w);
}

int* preencher(int *q, int *r, int *tam)
{	int t=1, v=1;

	int *w = (int*) malloc(1 * sizeof(int));	

	for(int i=0; i<12; i++)
	{	for(int j=0; j<20; j++)
		{	if(q[i] == r[j])
			{	for(int k=0; k<t; k++)
				{	if (q[i] == w[k]) v=0;
				}
				
				if(v==1)
				{	t++;
					w = realloc(w,t * sizeof(int));
					w[t-1] = q[i];
				}
				v=1;
			}
		}
	}
	
	*tam = t-1;
	return w;
}
