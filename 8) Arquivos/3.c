#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f;

	f = fopen("texto3.txt","wb");
	
	char s[20];
	printf("Char: "); fgets(s,20,stdin);
	int t=0;
	
	for(t; s[t] != '\0'; t++); t--;
	
	int teste = fwrite(s,sizeof(char),t,f);
	
	if(teste != t)
	{	printf("Erro na escrita");
		system("pause");
		exit(1);
	}
	fclose(f);
}
