#include <stdio.h>

void branco(int v[])
{     int  i=0;

      while(i<10)
      {     v[i] = 0;
            i++;      
      }
}

int quant(int v[], int i, int f)
{     int ic=i, ik=i;

      while(i<=f)//Analisa cada numero da sequencia
      {     ic++;
            while(i>0)//Analisa cada dígito
            {     v[i%10]++;
                  i = i/10;
            }
            i = ic;
      }
}

void exibir(int v[])
{     int i=0;

      printf("Valores: ");
      while(i<10)
      {     printf("%d ",v[i]);
            i++;      
      }
      printf("\n\n");
}

int main()
{     int i,f,v[10];
      
      branco(v);
      
      while(1)
      {     printf("Numeros inicial e final: "); scanf("%d %d",&i,&f);            
            quant(v,i,f);
            exibir(v);
      }
}
