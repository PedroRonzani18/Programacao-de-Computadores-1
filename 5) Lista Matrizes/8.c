#include <stdio.h>
#include <stdlib.h>

void preencher(int m[12][12])
{     int i=0, j=0;

      while(i<12)
      {     while(j<12)
            {     m[i][j] = rand()%11;
                  j++;
            }
            i++;
            j=0;
      }
}

void exibir(int m[12][12])
{     int i=0, j=0;

      printf("Matriz: \n");
      while(i<12)
      {     while(j<12)
            {     printf("[%d] ",m[i][j]);
                  j++;            
            }
            i++;
            j=0;
            printf("\n");
      }
      printf("\n");
}

void opera(int m[12][12], char x)
{     int i=0, j=0, c=0;
      float soma;

      while(j<12)
      {     while(i<j)
            {     soma = soma + m[i][j];
                  i++;
            }
            j++;
            i=0;
      }
      
      if(x=='S') printf("Soma: %.0f",soma);
      if(x=='M') printf("Média: %.2f",soma/30);
}

int main()
{     char x;
      int m[12][12];
      
      preencher(m);
      exibir(m);

      printf("Escreva 'S' para Soma, e 'M' para média: ");
      scanf("%c",&x);

      opera(m,x);
}
