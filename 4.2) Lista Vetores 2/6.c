#include <stdio.h>
#include <stdlib.h>

void decod(char s[])
{     int i=1;

      printf("Decodificado: %c",s[0]);
      
      while(s[i] != '\0')
      {     if(s[i]==' ') printf("%c",s[i+1]);
            i++;      
      }
      printf("\n");
}

int main()
{     int n, i=0;
      char s[50];     

      printf("Digite a quantidade de casos: ");
      scanf("%d",&n);
      
      while(i<n)
      {     printf("Digite a frase: ");
            getchar();
            fgets(s,50,stdin);
            decod(s);
            i++;
      }
}
