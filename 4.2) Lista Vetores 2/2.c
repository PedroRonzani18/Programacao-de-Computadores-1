#include <stdio.h>
#include <stdlib.h>

int preencher(int v[], int n)
{     int i=0;
      
      while(i<n)
      {     v[i] = rand()%11;
            i++;      
      }
}

void exibir(int v[], int n)
{     int i=0;

      printf("Vetor: ");
      while(i<n)
      {     printf("%d, ",v[i]);
            i++;      
      }     
      printf("\n");
}

int menor(int v[], int n)
{     int i=0, menor=v[0];

      while(i<n)
      {     if(v[i] < menor) menor = v[i];
            i++;      
      }
      printf("Menor: %d\n",menor);
}

int main()
{     int n;

      printf("Detemine o tamanho do vetor: ");
      scanf("%d",&n);
      
      int v[n];
      
      preencher(v,n);
      exibir(v,n);
      menor(v,n);

}
