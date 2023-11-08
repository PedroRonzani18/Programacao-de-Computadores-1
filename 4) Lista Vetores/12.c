#include <stdio.h>

int contar (char v[])
{	int i=0;
	while (v[i] != '\0')
	{	i++;		
	}
	return i;	
}

int main()
{	char v[15];
	
	printf ("Digite uma palavra: ");
	scanf ("%s",v); 
	printf ("Quantidade de elementos: %d\n",contar(v));
}
