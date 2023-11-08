#include <stdio.h>
#include <stdlib.h>

int main()
{	FILE *f = fopen("texto.txt","w");

	char s[100], s2[100];
	printf("String: "); fgets(s,100,stdin);
	printf("Substring: "); fgets(s2,100,stdin);
	fputs(s,f);
	
	fclose(f);
	fopen("texto.txt","r");
	
	char aux[100];
	
	fseek(f,0,SEEK_END);
	int long t = ftell(f);
	int v=1, ic, cont=0, t1=0, t2=0;
	
	for(t1; s[t1] != '\0'; t1++); t1--;
	for(t2; s2[t2] != '\0'; t2++); t2--;
	
	fgets(aux,t,f);
	
	for(int i=0; s[i] != '\0'; i++)
	{	//printf("s[%d] = %c || s2[0] = %c\n",i,s[i],s2[0]);
	
		if(s[i] == s2[0])
		{	ic = i;
			for(int j=0; j < t2; j++,i++)
			{	if(s[i] != s2[j]) v=0;
			
				//printf("s[%d] = %c || s2[%d] = %c\n",i,s[i],j,s2[j]);
			}
			
			if(v==1) 
			{	cont++;
				i--;
			}
			if(v==0) i = ic;
			v=1;
		}		
	}
	
	printf("Contador: %d\n",cont);		
}
