#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* intercept(int* q, int* r, int *t)
{	int k=1, cont=0;

	int *w = (int*) malloc (1 * sizeof(int));
	
	for(int c1 = 0; c1<12; c1++)
	{	for(int c2 = 20; c2>c1; c2--)
		{	if(q[c1] == r[c2]) 
			{	
				for(int i=0; i<k; i++)
				{	if(w[i] == q[c1]) cont++;
				}
				
				if(cont==0)
				{	k++;
					w = (int*) realloc (w, k * sizeof(int));
					w[k-1] = q[c1];
				}	
				cont=0;			
			}
		}
	}
	*t = k-1;
	return w;
}

int main()
{	int t;
	srand(time(0));	

	int *q = (int*) malloc (12 * sizeof(int));
	for(int i=0; i<12; i++) q[i] = rand()%11;	
	printf("q: ");
	for(int i=0; i<12; i++) printf("%d, ",q[i]);
	printf("\n");

	int *r = (int*) malloc (20 * sizeof(int));
	for(int i=0; i<20; i++) r[i] = rand()%11;	
	printf("r: ");
	for(int i=0; i<20; i++) printf("%d, ",r[i]);
	printf("\n");
	
	int *w = intercept(q,r,&t);	
	
	printf("w: ");
	for(int i=0; i<t; i++) printf("%d, ",w[i]);
	printf("\n");
	
	free(q);
	free(r);
	free(w);	
}
