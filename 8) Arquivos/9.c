#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto1.txt","r");

	if(f == NULL)
	{	printf("Erro de abertura\n");
		system("pause");
		exit(1);
	}
	
	fseek(f,0,SEEK_END); 
	int ta = ftell(f);
	fseek(f,0,SEEK_SET);
	
	char *str = malloc ((ta+1) * sizeof(char));
	
	fgets(str,ta,f);
	printf("Arquivo: %s\n",str);
	
	char pala[50];
	
	printf("Palavra: ");
	fgets(pala,50,stdin);
	
	int t=0, v=1, ic;
	
	for(t; pala[t] != '\0'; t++); t--; //tamanho da string
	
	pala[t] = '\0';
	
	//printf("palavra: %s\n",pala);
	
	for(int i=0; i<t; i++)
	{	if(str[i] == pala[0])
		{	ic = i;
			for(int j=0; j<t && v==1; j++,i++)
			{	if(pala[j] != str[i]) v=0;
			}
			
			if(v==1) //passar todas as letras n lugares para tras
				   //se saiu do for pq acabaram os casos para testar: MOVA
			{	for(ic; str[ic] != '\0'; ic++)
				{	str[ic] = str[ic + t];
					//printf("arq int: %s\n",str);
				}
			}
		}
	}
	
	printf("Arquivo novo: %s\n",str);
	
	fclose(f);
	f = fopen("texto1.txt","w");

	if(f == NULL)
	{	printf("Erro de abertura\n");
		system("pause");
		exit(1);
	}
	
	fputs(str,f);
	fclose(f);
	
	
}
