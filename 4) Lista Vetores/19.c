#include <stdio.h>
#include <stdlib.h>

int tamanho(char s[])//Funciona
{	int i=0;

	while (s[i] != '\0')
	{	i++;	
	}
	return i;
}

void exibir (int vet[])
{	int i=0;
	
	while (i<=4)
	{	printf ("%d, ",vet[i]);
		i++;	
	}
	printf ("\n");
}

int chnum(char ch)
{	int i=0;
	char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};

	while (1)
	{	if (ch==alf[i]) return i+1;
		i++;
	}	
}

char numch(int n)
{	char alf[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','x','w','y','z'};
	printf ("n = %d, alf[n-1] = %c\n",alf[n-1]);
	return alf[n-1];
}

void ordenarn(int v[], char s[]) //Funciona
{	int c1=0, c2=tamanho(s), aux;

	exibir(v);

	while (c1<c2)
	{	while (c1<c2)
		{	if (v[c1] > v[c2])
			{	aux = v[c1];
				v[c1] = v[c2];
				v[c2] = aux;			
			}
			c1++;		
		}
		c2--;
		c1=0;
	}
	
	exibir(v);
}

void ordenarc(char s[])
{	int t = tamanho(s);
	int i=0, v[30];
	
	while (s[i] != '\0') //Funciona
	{	v[i] = chnum(s[i]);
		i++;	
	}
	i=0;
	
	ordenarn(v,s);

	while(i<(t)) 
	{	s[i] = numch(v[i]);
		printf ("s[i] = %c\n",s[i]);
		i++;	
	}
}

int main()
{	char s[100];

	printf ("Digite um nome: ");
	gets(s);
	ordenarc(s);
	printf ("%s\n",s);

}
