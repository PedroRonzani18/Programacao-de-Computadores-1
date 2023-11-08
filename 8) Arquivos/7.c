#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f1, *f2;

	f1 = fopen("texto1.txt","r");
	f2 = fopen("texto3.txt","r");
	
	if (f1 == NULL || f2 == NULL)
	{	printf("Erro de abertura\n");
		system("pause");
		exit(1);
	}
	
	fseek(f1,0,SEEK_END);	int t1 = ftell(f1);
	fseek(f2,0,SEEK_END);	int t2 = ftell(f2);
	
	if (t1 > t2) printf("T1 > T2\n");
	if (t1 < t2) printf("T2 > T1\n");
}
