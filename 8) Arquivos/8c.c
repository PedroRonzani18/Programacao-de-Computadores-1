#include <stdio.h>
#include <stdlib.h>

int comparar(char s[], FILE *f)
{	int c = fgetc(f), v=1, v2 = 0, cont=0;

	int t=0; for(t; s[t] != '\0'; t++); t--;
	
	while(c != EOF)
	{	if(c == s[0])
		{	for(int i=0; i<t && v==1; i++)
			{	if (c != s[i]) v=0;
				c = fgetc(f);
				v2=1; //conferiu igualdade
			}
		}
		
		if (v==1 && v2==1) cont++; //se saiu por i=t e houve mexida, aumenta
		if(c != s[0]) c = fgetc(f); //se for igual NÃO MUDE
		
		v=1; 
		v2=0;
	}	
	return cont;
}

int main()
{	FILE *f;

	f = fopen("texto1.txt","r");
	
	if (f == NULL)
	{	printf("Erro de abertura\n");
		system("pause");
		exit(1);
	}
	
	char s[50];
	for(int i=0; s[i] != '\0'; i++)
	{	if(s[i+1] == '\0') s[i] = s[i+1];
	}
	
	printf("Palavra: "); 
	fgets(s,50,stdin);
	
	int q = comparar(s,f);
	printf("%d vezes\n",q);	
}
