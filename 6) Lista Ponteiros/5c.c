#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{	int v[10];
	
	//srand(time(0));
	printf("Vetor: ");
	for(int i=0; i<10; i++)
	{	v[i] = rand()%10;
		printf("%d, ",v[i]);
	}
	printf("\n");
	
	int** p = malloc(10 * sizeof(int*));
	int maior = -1;
	int *posi;
	
	for(int i=0; i<10; i++)
	{	if(v[i] > maior) 
		{	maior = v[i];
			p[0] = &v[i];
		}
	}	
	int big = maior + 1;
	
	for(int c1=0; c1<10; c1++)
	{	for(int c2=9; c2>c1; c2--)
		{	//printf("v[%d] = %d || v[%d] = %d\n",c1,v[c1],c2,v[c2]);getchar();
			if(v[c1] == v[c2]) 
			{	v[c2] = big;
				big++;
			}
		}
	}
	
	big--;
	maior = big;
	
	printf("Vetor: ");
	for(int i=0; i<10; i++)
	{	printf("%d, ",v[i]);
	}
	printf("\n");
	
	int maiori = -1;
	
	for(int j=1; j<10; j++)
	{	for(int i=0; i < 10; i++)
		{	if(maiori < v[i] && v[i] < maior) 
			{	maiori = v[i];
				p[j] = &v[j];
			}
		}
		maior = maiori;
		maiori = -1;
	}
	
	printf("Vetor de ponteiros: ");
	for(int i=0; i<10; i++) printf("%p, ",p[i]);
	printf("\n");
}

