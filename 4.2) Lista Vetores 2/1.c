#include <stdio.h>

void exibir(int v[], char c)
{     int i=0;

      if (c =='p') printf("\nVetor par:\n");
      if (c == 'i') printf("\nVetor impar:\n");
      
      while(i<5)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("\n");
}

void resto(int v[], int c, char ch)
{     int i=0;

      if (ch =='p') printf("\nResto Vetor par:\n");
      if (ch == 'i') printf("\nResto Vetor impar:\n");
     
      while(i<c)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("\n");

}

int main()
{     int pares[5], impares[5];
      int c=0, p=0, i=0;
      int n;

      while(c<=15)
      {     printf("Valor: ");
            scanf("%d",&n);
            
            if(n%2==0)
            {     pares[p] = n;
                  p++;
                  c++;
            }
            
            if(p==5)
            {     exibir(pares,'p');
                  p=0;
            }
            
            if (n%2!=0)
            {     impares[i] = n;
                  i++; 
                  c++;           
            }
            
            if(i==5)
            {     exibir(impares,'i');
                  i=0;            
            }
      }
      
      resto(pares,p,'p');
      resto(impares,i,'i');
}
