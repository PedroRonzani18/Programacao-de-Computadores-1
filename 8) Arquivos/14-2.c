#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto.txt","w+b");

	int v[20];
	for(int i=0; i<20; i++) v[i] = rand()%10;
	
	for(int i=0; i<20; i++)
	{	fwrite(&v[i],sizeof(int),1,f);
	}
	
	int maior = v[0];
	for(int i=0; i<20; i++)
	{	if(v[i] > maior) maior = v[i];
	}
	maior++;
	
	int num1, num2;
	
	printf("Numeros: ");
	for(int i=0; i<20; i++)
	{	fread(&num1,sizeof(int),1,f);
	
		for(int j=19; j > i; j--)
		{	fread(&num2,sizeof(int),1,f);
			if (num2 == num1) 
			{	fwrite(&maior,sizeof(int),1,f);
		}	
	}
	
	
	
	
}
