#include <stdio.h>
#include <stdlib.h>

int tamanho(char s[]) //Funciona
{	int t=0;

	while (1)
	{	if (s[t]=='\0') return t;
		t++;
	}
}

void eliminar (char s[], char ch)
{	int i=0, v=1, t=0;

	while (v==1)
	{	while (s[i]!='\0')
		{	if(s[i]==ch)
			{	while (i<=tamanho(s))
				{	s[i] = s[i+1];
					i++;
				}
				s[tamanho(s)]='\0';
				i=0;	
			}			
			else i++;
		}
		
		while(s[i] != '\0')
		{	if(s[i]==ch) t=1;
			i++;	
		}
		if(t==0) v=0;
		t=0;
	}

}

int main()
{	char s[100], ch;

	printf ("Digite uma frase: ");
	gets(s);
	printf ("Digite a letra a ser removida: ");
	scanf ("%c",&ch);
	eliminar(s,ch);
	printf ("Nova frase: %s\n",s);
}
