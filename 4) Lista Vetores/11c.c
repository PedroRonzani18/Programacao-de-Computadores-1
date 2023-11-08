#include <stdio.h>
#include <stdlib.h>

int tamanho1=1;
int tamanho2=1;

int preencher (int v[], int n)
{	int i=0;
	
	while (i<=n)
	{	v[i] = rand()%11;
		i++;
	}
}

int exibir (int v[], int n)
{	int i=0;
	
	printf ("Valores dentro do vetor: ");
	
	while (i<=n-1)
	{	printf ("%d, ",v[i]);
		i++;
	}
	printf ("\n");
}

int compara (int v1[], int v2[], int t1, int t2)
{	int i=0;

	if (t1 != t2) return 0;
	
	while (i<=t1)
	{	if (v1[i]!=v2[i]) return 0;
		i++;
	}
	return 1;
}

int main()
{	int t1, t2;
	
	printf ("Digite o tamanho do vetor 1: ");
	scanf ("%d",&t1);
	
	printf ("Digite o tamanho do vetor 2: ");
	scanf ("%d",&t2);
	
	int v1[t1], v2[t2];
	
	preencher(v1,t1);
	exibir(v1,t1);
	preencher(v2,t2);
	exibir(v2,t2);
	
	if (compara(v1,v2,t1,t2)==1) printf ("Iguais");
	else printf ("Diferentes");

}
