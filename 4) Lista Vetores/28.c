#include <stdio.h>
#include <stdlib.h>
#define M 4
#define N 5

void preencher_exibir(int mat[M][N])
{     int i=0, j=0;

      printf("Matriz: \n");
      while(i<M)
      {     while(j<N)
            {     mat[i][j] = rand()%10;
                  printf("[%d] ",mat[i][j]);
                  j++;            
            }
            printf("\n");
            i++;
            j=0;
      }
}

void menor(int v2[], int mat[M][N], int menor)
{     int i=0, j=0, x = menor;

      while(j<N)
      {     while(i<M)
            {     if(mat[i][j] < menor) menor = mat[i][j];
                  i++;            
            }
            v2[j] = menor;
            j++;    
            i=0;
            menor = x; 
      }
}

void maior(int v1[], int mat[M][N], int v2[])
{     int i=0, j=0, maior=-1;

      while(j<N)
      {     while(i<M)
            {     //printf("\nm[i][j] = %d || maior = %d || i = %d || j = %d",mat[i][j],maior,i,j);  
                  if(mat[i][j] > maior) maior = mat[i][j];
                  i++;       
            }            
            v1[j] = maior;    //printf("\nv1[j] = %d || j = %d\n",v1[j],j);
            menor(v2,mat,maior);
            j++;
            i=0;
            maior = -1;
      }
}

void exibirv(int v[])
{     int i=0;

      while(i<N-1)
      {     printf("%d, ",v[i]);
            i++;      
      }
      printf("%d",v[i]);
}

int main()
{     int mat[M][N];
      int v1[N], v2[N];

      preencher_exibir(mat);    
      maior(v1,mat,v2);
      printf ("\nMaiores valores: "); exibirv(v1);
      printf ("\nMenores valores: "); exibirv(v2); 
      printf("\n");

}
